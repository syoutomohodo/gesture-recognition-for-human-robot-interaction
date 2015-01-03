// Generated for ALEngagementZones version 0

#ifndef ALENGAGEMENTZONESPROXY_H_
#define ALENGAGEMENTZONESPROXY_H_

#include <alproxies/api.h>
#include <boost/shared_ptr.hpp>
#include <alvalue/alvalue.h>
#include <qi/types.hpp>
#include <qitype/anyobject.hpp>
#include <string>
#include <vector>

namespace AL
{
  class ALBroker;
  class ALProxy;
  class ALEngagementZonesProxy;

  namespace detail {
    class ALEngagementZonesProxyPostHandler
    {
    protected:
      ALEngagementZonesProxyPostHandler(boost::shared_ptr<ALProxy> proxy);

    public:
      friend class AL::ALEngagementZonesProxy;

      /// <summary>
      /// Exits and unregisters the module.
      /// </summary>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int exit();

      /// <summary>
      /// 
      /// </summary>
      /// <param name="status">  </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int pause(const bool& status);

      /// <summary>
      /// Set the first distance used for the delimitation of the engagement zones (nearest limit)
      /// </summary>
      /// <param name="distance"> New first distance (in meters) for delimitation (nearest limit), it should be positive and smaller than the second distance </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int setFirstLimitDistance(const float& distance);

      /// <summary>
      /// Set the angle used for the delimitation of the engagement zones
      /// </summary>
      /// <param name="angle"> New angle (in degrees) for delimitation, it should be below 180 </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int setLimitAngle(const float& angle);

      /// <summary>
      /// Set the second distance used for the delimitation of the engagement zones (furthest limit)
      /// </summary>
      /// <param name="distance"> New second distance (in meters) for delimitation (furthest limit), it should be positive and bigger than the first distance </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int setSecondLimitDistance(const float& distance);

      /// <summary>
      /// returns true if the method is currently running
      /// </summary>
      /// <param name="id"> the ID of the method to wait for </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int stop(const int& id);

      /// <summary>
      /// Subscribes to the extractor. This causes the extractor to start writing information to memory using the keys described by getOutputNames(). These can be accessed in memory using ALMemory.getData("keyName"). In many cases you can avoid calling subscribe on the extractor by just calling ALMemory.subscribeToEvent() supplying a callback method. This will automatically subscribe to the extractor for you.
      /// </summary>
      /// <param name="name"> Name of the module which subscribes. </param>
      /// <param name="period"> Refresh period (in milliseconds) if relevant. </param>
      /// <param name="precision"> Precision of the extractor if relevant. </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int subscribe(const std::string& name, const int& period, const float& precision);

      /// <summary>
      /// Subscribes to the extractor. This causes the extractor to start writing information to memory using the keys described by getOutputNames(). These can be accessed in memory using ALMemory.getData("keyName"). In many cases you can avoid calling subscribe on the extractor by just calling ALMemory.subscribeToEvent() supplying a callback method. This will automatically subscribe to the extractor for you.
      /// </summary>
      /// <param name="name"> Name of the module which subscribes. </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int subscribe(const std::string& name);

      /// <summary>
      /// Unsubscribes from the extractor.
      /// </summary>
      /// <param name="name"> Name of the module which had subscribed. </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int unsubscribe(const std::string& name);

      /// <summary>
      /// Updates the period if relevant.
      /// </summary>
      /// <param name="name"> Name of the module which has subscribed. </param>
      /// <param name="period"> Refresh period (in milliseconds). </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int updatePeriod(const std::string& name, const int& period);

      /// <summary>
      /// Updates the precision if relevant.
      /// </summary>
      /// <param name="name"> Name of the module which has subscribed. </param>
      /// <param name="precision"> Precision of the extractor. </param>
      /// <returns> brokerTaskID : The ID of the task assigned to it by the broker.</returns>
      int updatePrecision(const std::string& name, const float& precision);

    private:
      boost::shared_ptr<ALProxy> _proxy;
    };
  }

  /// <summary></summary>
  /// \ingroup ALProxies
  class ALPROXIES_API ALEngagementZonesProxy
  {
  private:
    boost::shared_ptr<ALProxy> _proxy;

  public:
    /// <summary>
    /// Default Constructor. If there is a broker in your process, which is always the case
    /// if you are in a module, then this will be found and used.
    /// </summary>
    ALEngagementZonesProxy();

    /// <summary>
    /// Explicit Broker Constructor. If you have a smart pointer to a broker that you want
    /// to specify, then you can use this constructor. In most cases, the default constructor
    /// will do the work for you without passing a broker explicitly.
    /// </summary>
    /// <param name="broker">A smart pointer to your broker</param>
    ALEngagementZonesProxy(boost::shared_ptr<ALBroker> broker);

    /// <summary>
    /// Explicit Proxy Constructor. Create a specialised proxy from a generic proxy.
    /// </summary>
    /// <param name="broker">A smart pointer to your broker</param>
    ALEngagementZonesProxy(boost::shared_ptr<ALProxy> proxy);

    /// <summary>
    /// Remote Constructor. This constructor allows you to connect to a remote module by
    /// explicit IP address and port. This is useful if you are not within a process that
    /// has a broker, or want to connect to a remote instance of NAOqi such as another
    /// robot.
    /// </summary>
    /// <param name="ip">The IP address of the remote module you want to connect to</param>
    /// <param name="port">The port of the remote module, typically 9559</param>
    ALEngagementZonesProxy(const std::string &ip, int port=9559);

    /// <summary>
    /// Gets the underlying generic proxy
    /// </summary>
    boost::shared_ptr<ALProxy> getGenericProxy();

    /// <summary>
    /// Computes the engagement zone in which an object is from its position in FRAME_ROBOT
    /// </summary>
    /// <param name="x"> X coordinate of the object in FRAME_ROBOT </param>
    /// <param name="y"> Y coordinate of the object in FRAME_ROBOT </param>
    /// <param name="z"> Z coordinate of the object in FRAME_ROBOT </param>
    /// <returns> Engagement zone of the object </returns>
    int computeEngagementZone(const float& x, const float& y, const float& z);

    /// <summary>
    /// Computes the engagement zone in which an object is from its anglular position in the camera image, its distance from the robot, and the position of the camera in FRAME_ROBOT
    /// </summary>
    /// <param name="xAngle"> X angular coordinate of the object in the image </param>
    /// <param name="yAngle"> Y angular coordinate of the object in the image </param>
    /// <param name="distance"> distance of the object from the robot </param>
    /// <param name="cameraPositionRobot"> camera position in FRAME_ROBOT </param>
    /// <returns> Engagement zone of the object </returns>
    int computeEngagementZone(const float& xAngle, const float& yAngle, const float& distance, const AL::ALValue& cameraPositionRobot);

    /// <summary>
    /// Exits and unregisters the module.
    /// </summary>
    void exit();

    /// <summary>
    /// Gets the name of the parent broker.
    /// </summary>
    /// <returns> The name of the parent broker. </returns>
    std::string getBrokerName();

    /// <summary>
    /// Gets the current period.
    /// </summary>
    /// <returns> Refresh period (in milliseconds). </returns>
    int getCurrentPeriod();

    /// <summary>
    /// Gets the current precision.
    /// </summary>
    /// <returns> Precision of the extractor. </returns>
    float getCurrentPrecision();

    /// <summary>
    /// Get the list of events updated in ALMemory.
    /// </summary>
    /// <returns> Array of events updated by this extractor in ALMemory </returns>
    std::vector<std::string> getEventList();

    /// <summary>
    /// Get the first distance used for the delimitation of the engagement zones (nearest limit)
    /// </summary>
    /// <returns> Current first distance (in meters) used for delimitation (nearest limit) </returns>
    float getFirstLimitDistance();

    /// <summary>
    /// Get the angle used for the delimitation of the engagement zones
    /// </summary>
    /// <returns> Current angle used for delimitation </returns>
    float getLimitAngle();

    /// <summary>
    /// Get the list of events updated in ALMemory.
    /// </summary>
    /// <returns> Array of events updated by this extractor in ALMemory </returns>
    std::vector<std::string> getMemoryKeyList();

    /// <summary>
    /// Retrieves a method's description.
    /// </summary>
    /// <param name="methodName"> The name of the method. </param>
    /// <returns> A structure containing the method's description. </returns>
    AL::ALValue getMethodHelp(const std::string& methodName);

    /// <summary>
    /// Retrieves the module's method list.
    /// </summary>
    /// <returns> An array of method names. </returns>
    std::vector<std::string> getMethodList();

    /// <summary>
    /// Retrieves the module's description.
    /// </summary>
    /// <returns> A structure describing the module. </returns>
    AL::ALValue getModuleHelp();

    /// <summary>
    /// Gets the period for a specific subscription.
    /// </summary>
    /// <param name="name"> Name of the module which has subscribed. </param>
    /// <returns> Refresh period (in milliseconds). </returns>
    int getMyPeriod(const std::string& name);

    /// <summary>
    /// Gets the precision for a specific subscription.
    /// </summary>
    /// <param name="name"> name of the module which has subscribed </param>
    /// <returns> precision of the extractor </returns>
    float getMyPrecision(const std::string& name);

    /// <summary>
    /// Get the list of values updated in ALMemory.
    /// </summary>
    /// <returns> Array of values updated by this extractor in ALMemory </returns>
    std::vector<std::string> getOutputNames();

    /// <summary>
    /// Get the second distance used for the delimitation of the engagement zones (furthest limit)
    /// </summary>
    /// <returns> Current second distance (in meters) used for delimitation (furthest limit) </returns>
    float getSecondLimitDistance();

    /// <summary>
    /// Gets the parameters given by the module.
    /// </summary>
    /// <returns> Array of names and parameters of all subscribers. </returns>
    AL::ALValue getSubscribersInfo();

    /// <summary>
    /// Gets the method usage string. This summarises how to use the method.
    /// </summary>
    /// <param name="name"> The name of the method. </param>
    /// <returns> A string that summarises the usage of the method. </returns>
    std::string getUsage(const std::string& name);

    /// <summary>
    /// 
    /// </summary>
    bool isPaused();

    /// <summary>
    /// 
    /// </summary>
    bool isProcessing();

    /// <summary>
    /// Returns true if the method is currently running.
    /// </summary>
    /// <param name="id"> The ID of the method that was returned when calling the method using 'post' </param>
    /// <returns> True if the method is currently running </returns>
    bool isRunning(const int& id);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="status">  </param>
    void pause(const bool& status);

    /// <summary>
    /// Just a ping. Always returns true
    /// </summary>
    /// <returns> returns true </returns>
    bool ping();

    /// <summary>
    /// Set the first distance used for the delimitation of the engagement zones (nearest limit)
    /// </summary>
    /// <param name="distance"> New first distance (in meters) for delimitation (nearest limit), it should be positive and smaller than the second distance </param>
    void setFirstLimitDistance(const float& distance);

    /// <summary>
    /// Set the angle used for the delimitation of the engagement zones
    /// </summary>
    /// <param name="angle"> New angle (in degrees) for delimitation, it should be below 180 </param>
    void setLimitAngle(const float& angle);

    /// <summary>
    /// Set the second distance used for the delimitation of the engagement zones (furthest limit)
    /// </summary>
    /// <param name="distance"> New second distance (in meters) for delimitation (furthest limit), it should be positive and bigger than the first distance </param>
    void setSecondLimitDistance(const float& distance);

    /// <summary>
    /// returns true if the method is currently running
    /// </summary>
    /// <param name="id"> the ID of the method to wait for </param>
    void stop(const int& id);

    /// <summary>
    /// Subscribes to the extractor. This causes the extractor to start writing information to memory using the keys described by getOutputNames(). These can be accessed in memory using ALMemory.getData("keyName"). In many cases you can avoid calling subscribe on the extractor by just calling ALMemory.subscribeToEvent() supplying a callback method. This will automatically subscribe to the extractor for you.
    /// </summary>
    /// <param name="name"> Name of the module which subscribes. </param>
    /// <param name="period"> Refresh period (in milliseconds) if relevant. </param>
    /// <param name="precision"> Precision of the extractor if relevant. </param>
    void subscribe(const std::string& name, const int& period, const float& precision);

    /// <summary>
    /// Subscribes to the extractor. This causes the extractor to start writing information to memory using the keys described by getOutputNames(). These can be accessed in memory using ALMemory.getData("keyName"). In many cases you can avoid calling subscribe on the extractor by just calling ALMemory.subscribeToEvent() supplying a callback method. This will automatically subscribe to the extractor for you.
    /// </summary>
    /// <param name="name"> Name of the module which subscribes. </param>
    void subscribe(const std::string& name);

    /// <summary>
    /// Unsubscribes from the extractor.
    /// </summary>
    /// <param name="name"> Name of the module which had subscribed. </param>
    void unsubscribe(const std::string& name);

    /// <summary>
    /// Updates the period if relevant.
    /// </summary>
    /// <param name="name"> Name of the module which has subscribed. </param>
    /// <param name="period"> Refresh period (in milliseconds). </param>
    void updatePeriod(const std::string& name, const int& period);

    /// <summary>
    /// Updates the precision if relevant.
    /// </summary>
    /// <param name="name"> Name of the module which has subscribed. </param>
    /// <param name="precision"> Precision of the extractor. </param>
    void updatePrecision(const std::string& name, const float& precision);

    /// <summary>
    /// Returns the version of the module.
    /// </summary>
    /// <returns> A string containing the version of the module. </returns>
    std::string version();

    /// <summary>
    /// Wait for the end of a long running method that was called using 'post'
    /// </summary>
    /// <param name="id"> The ID of the method that was returned when calling the method using 'post' </param>
    /// <param name="timeoutPeriod"> The timeout period in ms. To wait indefinately, use a timeoutPeriod of zero. </param>
    /// <returns> True if the timeout period terminated. False if the method returned. </returns>
    bool wait(const int& id, const int& timeoutPeriod);


    detail::ALEngagementZonesProxyPostHandler post;
  };

}
#endif // ALENGAGEMENTZONESPROXY_H_

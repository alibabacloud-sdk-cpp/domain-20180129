// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DOMAIN20180129_H_
#define ALIBABACLOUD_DOMAIN20180129_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Domain20180129 {
class AcknowledgeTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<vector<string>> taskDetailNo{};
  shared_ptr<string> userClientIp{};

  AcknowledgeTaskResultRequest() {}

  explicit AcknowledgeTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskDetailNo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskDetailNo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskDetailNo = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~AcknowledgeTaskResultRequest() = default;
};
class AcknowledgeTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};

  AcknowledgeTaskResultResponseBody() {}

  explicit AcknowledgeTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
  }


  virtual ~AcknowledgeTaskResultResponseBody() = default;
};
class AcknowledgeTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcknowledgeTaskResultResponseBody> body{};

  AcknowledgeTaskResultResponse() {}

  explicit AcknowledgeTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AcknowledgeTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcknowledgeTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~AcknowledgeTaskResultResponse() = default;
};
class BatchFuzzyMatchDomainSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  BatchFuzzyMatchDomainSensitiveWordRequest() {}

  explicit BatchFuzzyMatchDomainSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordRequest() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord : public Darabonba::Model {
public:
  shared_ptr<string> word{};

  BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords : public Darabonba::Model {
public:
  shared_ptr<vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord>> matchedSensitiveWord{};

  BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchedSensitiveWord) {
      vector<boost::any> temp1;
      for(auto item1:*matchedSensitiveWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchedSensitiveWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchedSensitiveWord") != m.end() && !m["MatchedSensitiveWord"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchedSensitiveWord"].type()) {
        vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchedSensitiveWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchedSensitiveWord = make_shared<vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWordsMatchedSensitiveWord>>(expect1);
      }
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult : public Darabonba::Model {
public:
  shared_ptr<bool> exist{};
  shared_ptr<string> keyword{};
  shared_ptr<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords> matchedSentiveWords{};

  BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exist) {
      res["Exist"] = boost::any(*exist);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (matchedSentiveWords) {
      res["MatchedSentiveWords"] = matchedSentiveWords ? boost::any(matchedSentiveWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exist") != m.end() && !m["Exist"].empty()) {
      exist = make_shared<bool>(boost::any_cast<bool>(m["Exist"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MatchedSentiveWords") != m.end() && !m["MatchedSentiveWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["MatchedSentiveWords"].type()) {
        BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MatchedSentiveWords"]));
        matchedSentiveWords = make_shared<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResultMatchedSentiveWords>(model1);
      }
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList : public Darabonba::Model {
public:
  shared_ptr<vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult>> sensitiveWordMatchResult{};

  BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitiveWordMatchResult) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveWordMatchResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveWordMatchResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SensitiveWordMatchResult") != m.end() && !m["SensitiveWordMatchResult"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveWordMatchResult"].type()) {
        vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveWordMatchResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveWordMatchResult = make_shared<vector<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult>>(expect1);
      }
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList> sensitiveWordMatchResultList{};

  BatchFuzzyMatchDomainSensitiveWordResponseBody() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sensitiveWordMatchResultList) {
      res["SensitiveWordMatchResultList"] = sensitiveWordMatchResultList ? boost::any(sensitiveWordMatchResultList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SensitiveWordMatchResultList") != m.end() && !m["SensitiveWordMatchResultList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SensitiveWordMatchResultList"].type()) {
        BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SensitiveWordMatchResultList"]));
        sensitiveWordMatchResultList = make_shared<BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList>(model1);
      }
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBody() = default;
};
class BatchFuzzyMatchDomainSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchFuzzyMatchDomainSensitiveWordResponseBody> body{};

  BatchFuzzyMatchDomainSensitiveWordResponse() {}

  explicit BatchFuzzyMatchDomainSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchFuzzyMatchDomainSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchFuzzyMatchDomainSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~BatchFuzzyMatchDomainSensitiveWordResponse() = default;
};
class CancelDomainVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  CancelDomainVerificationRequest() {}

  explicit CancelDomainVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CancelDomainVerificationRequest() = default;
};
class CancelDomainVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelDomainVerificationResponseBody() {}

  explicit CancelDomainVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelDomainVerificationResponseBody() = default;
};
class CancelDomainVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDomainVerificationResponseBody> body{};

  CancelDomainVerificationResponse() {}

  explicit CancelDomainVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelDomainVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDomainVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDomainVerificationResponse() = default;
};
class CancelOperationAuditRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditRecordId{};
  shared_ptr<string> lang{};

  CancelOperationAuditRequest() {}

  explicit CancelOperationAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRecordId) {
      res["AuditRecordId"] = boost::any(*auditRecordId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRecordId") != m.end() && !m["AuditRecordId"].empty()) {
      auditRecordId = make_shared<long>(boost::any_cast<long>(m["AuditRecordId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~CancelOperationAuditRequest() = default;
};
class CancelOperationAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelOperationAuditResponseBody() {}

  explicit CancelOperationAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelOperationAuditResponseBody() = default;
};
class CancelOperationAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOperationAuditResponseBody> body{};

  CancelOperationAuditResponse() {}

  explicit CancelOperationAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelOperationAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOperationAuditResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOperationAuditResponse() = default;
};
class CancelQualificationVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> qualificationType{};
  shared_ptr<string> userClientIp{};

  CancelQualificationVerificationRequest() {}

  explicit CancelQualificationVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (qualificationType) {
      res["QualificationType"] = boost::any(*qualificationType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("QualificationType") != m.end() && !m["QualificationType"].empty()) {
      qualificationType = make_shared<string>(boost::any_cast<string>(m["QualificationType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CancelQualificationVerificationRequest() = default;
};
class CancelQualificationVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelQualificationVerificationResponseBody() {}

  explicit CancelQualificationVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelQualificationVerificationResponseBody() = default;
};
class CancelQualificationVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelQualificationVerificationResponseBody> body{};

  CancelQualificationVerificationResponse() {}

  explicit CancelQualificationVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelQualificationVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelQualificationVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CancelQualificationVerificationResponse() = default;
};
class CancelTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> userClientIp{};

  CancelTaskRequest() {}

  explicit CancelTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CancelTaskRequest() = default;
};
class CancelTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelTaskResponseBody() {}

  explicit CancelTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelTaskResponseBody() = default;
};
class CancelTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelTaskResponseBody> body{};

  CancelTaskResponse() {}

  explicit CancelTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelTaskResponse() = default;
};
class CheckDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> feeCommand{};
  shared_ptr<string> feeCurrency{};
  shared_ptr<long> feePeriod{};
  shared_ptr<string> lang{};

  CheckDomainRequest() {}

  explicit CheckDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (feeCommand) {
      res["FeeCommand"] = boost::any(*feeCommand);
    }
    if (feeCurrency) {
      res["FeeCurrency"] = boost::any(*feeCurrency);
    }
    if (feePeriod) {
      res["FeePeriod"] = boost::any(*feePeriod);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("FeeCommand") != m.end() && !m["FeeCommand"].empty()) {
      feeCommand = make_shared<string>(boost::any_cast<string>(m["FeeCommand"]));
    }
    if (m.find("FeeCurrency") != m.end() && !m["FeeCurrency"].empty()) {
      feeCurrency = make_shared<string>(boost::any_cast<string>(m["FeeCurrency"]));
    }
    if (m.find("FeePeriod") != m.end() && !m["FeePeriod"].empty()) {
      feePeriod = make_shared<long>(boost::any_cast<long>(m["FeePeriod"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~CheckDomainRequest() = default;
};
class CheckDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> avail{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> dynamicCheck{};
  shared_ptr<string> premium{};
  shared_ptr<long> price{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};

  CheckDomainResponseBody() {}

  explicit CheckDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avail) {
      res["Avail"] = boost::any(*avail);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (dynamicCheck) {
      res["DynamicCheck"] = boost::any(*dynamicCheck);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avail") != m.end() && !m["Avail"].empty()) {
      avail = make_shared<string>(boost::any_cast<string>(m["Avail"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DynamicCheck") != m.end() && !m["DynamicCheck"].empty()) {
      dynamicCheck = make_shared<bool>(boost::any_cast<bool>(m["DynamicCheck"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<string>(boost::any_cast<string>(m["Premium"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDomainResponseBody() = default;
};
class CheckDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainResponseBody> body{};

  CheckDomainResponse() {}

  explicit CheckDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainResponse() = default;
};
class CheckDomainSunriseClaimRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  CheckDomainSunriseClaimRequest() {}

  explicit CheckDomainSunriseClaimRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CheckDomainSunriseClaimRequest() = default;
};
class CheckDomainSunriseClaimResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> claimKey{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};

  CheckDomainSunriseClaimResponseBody() {}

  explicit CheckDomainSunriseClaimResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimKey) {
      res["ClaimKey"] = boost::any(*claimKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimKey") != m.end() && !m["ClaimKey"].empty()) {
      claimKey = make_shared<string>(boost::any_cast<string>(m["ClaimKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
  }


  virtual ~CheckDomainSunriseClaimResponseBody() = default;
};
class CheckDomainSunriseClaimResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainSunriseClaimResponseBody> body{};

  CheckDomainSunriseClaimResponse() {}

  explicit CheckDomainSunriseClaimResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDomainSunriseClaimResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainSunriseClaimResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainSunriseClaimResponse() = default;
};
class CheckMaxYearOfServerLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkAction{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  CheckMaxYearOfServerLockRequest() {}

  explicit CheckMaxYearOfServerLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkAction) {
      res["CheckAction"] = boost::any(*checkAction);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckAction") != m.end() && !m["CheckAction"].empty()) {
      checkAction = make_shared<string>(boost::any_cast<string>(m["CheckAction"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CheckMaxYearOfServerLockRequest() = default;
};
class CheckMaxYearOfServerLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxYear{};
  shared_ptr<string> requestId{};

  CheckMaxYearOfServerLockResponseBody() {}

  explicit CheckMaxYearOfServerLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxYear) {
      res["MaxYear"] = boost::any(*maxYear);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxYear") != m.end() && !m["MaxYear"].empty()) {
      maxYear = make_shared<long>(boost::any_cast<long>(m["MaxYear"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckMaxYearOfServerLockResponseBody() = default;
};
class CheckMaxYearOfServerLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMaxYearOfServerLockResponseBody> body{};

  CheckMaxYearOfServerLockResponse() {}

  explicit CheckMaxYearOfServerLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckMaxYearOfServerLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMaxYearOfServerLockResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMaxYearOfServerLockResponse() = default;
};
class CheckProcessingServerLockApplyRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> feePeriod{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  CheckProcessingServerLockApplyRequest() {}

  explicit CheckProcessingServerLockApplyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (feePeriod) {
      res["FeePeriod"] = boost::any(*feePeriod);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("FeePeriod") != m.end() && !m["FeePeriod"].empty()) {
      feePeriod = make_shared<long>(boost::any_cast<long>(m["FeePeriod"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CheckProcessingServerLockApplyRequest() = default;
};
class CheckProcessingServerLockApplyResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> exists{};
  shared_ptr<string> requestId{};

  CheckProcessingServerLockApplyResponseBody() {}

  explicit CheckProcessingServerLockApplyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exists) {
      res["Exists"] = boost::any(*exists);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exists") != m.end() && !m["Exists"].empty()) {
      exists = make_shared<bool>(boost::any_cast<bool>(m["Exists"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckProcessingServerLockApplyResponseBody() = default;
};
class CheckProcessingServerLockApplyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckProcessingServerLockApplyResponseBody> body{};

  CheckProcessingServerLockApplyResponse() {}

  explicit CheckProcessingServerLockApplyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckProcessingServerLockApplyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckProcessingServerLockApplyResponseBody>(model1);
      }
    }
  }


  virtual ~CheckProcessingServerLockApplyResponse() = default;
};
class CheckTransferInFeasibilityRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> transferAuthorizationCode{};
  shared_ptr<string> userClientIp{};

  CheckTransferInFeasibilityRequest() {}

  explicit CheckTransferInFeasibilityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (transferAuthorizationCode) {
      res["TransferAuthorizationCode"] = boost::any(*transferAuthorizationCode);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TransferAuthorizationCode") != m.end() && !m["TransferAuthorizationCode"].empty()) {
      transferAuthorizationCode = make_shared<string>(boost::any_cast<string>(m["TransferAuthorizationCode"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~CheckTransferInFeasibilityRequest() = default;
};
class CheckTransferInFeasibilityResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> canTransfer{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> productId{};
  shared_ptr<string> requestId{};

  CheckTransferInFeasibilityResponseBody() {}

  explicit CheckTransferInFeasibilityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canTransfer) {
      res["CanTransfer"] = boost::any(*canTransfer);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanTransfer") != m.end() && !m["CanTransfer"].empty()) {
      canTransfer = make_shared<bool>(boost::any_cast<bool>(m["CanTransfer"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckTransferInFeasibilityResponseBody() = default;
};
class CheckTransferInFeasibilityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckTransferInFeasibilityResponseBody> body{};

  CheckTransferInFeasibilityResponse() {}

  explicit CheckTransferInFeasibilityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckTransferInFeasibilityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckTransferInFeasibilityResponseBody>(model1);
      }
    }
  }


  virtual ~CheckTransferInFeasibilityResponse() = default;
};
class ConfirmTransferInEmailRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  ConfirmTransferInEmailRequest() {}

  explicit ConfirmTransferInEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~ConfirmTransferInEmailRequest() = default;
};
class ConfirmTransferInEmailResponseBodyFailList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> failDomain{};

  ConfirmTransferInEmailResponseBodyFailList() {}

  explicit ConfirmTransferInEmailResponseBodyFailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failDomain) {
      res["FailDomain"] = boost::any(*failDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailDomain") != m.end() && !m["FailDomain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FailDomain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FailDomain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      failDomain = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfirmTransferInEmailResponseBodyFailList() = default;
};
class ConfirmTransferInEmailResponseBodySuccessList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> successDomain{};

  ConfirmTransferInEmailResponseBodySuccessList() {}

  explicit ConfirmTransferInEmailResponseBodySuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (successDomain) {
      res["SuccessDomain"] = boost::any(*successDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuccessDomain") != m.end() && !m["SuccessDomain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuccessDomain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuccessDomain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      successDomain = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfirmTransferInEmailResponseBodySuccessList() = default;
};
class ConfirmTransferInEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<ConfirmTransferInEmailResponseBodyFailList> failList{};
  shared_ptr<string> requestId{};
  shared_ptr<ConfirmTransferInEmailResponseBodySuccessList> successList{};

  ConfirmTransferInEmailResponseBody() {}

  explicit ConfirmTransferInEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failList) {
      res["FailList"] = failList ? boost::any(failList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successList) {
      res["SuccessList"] = successList ? boost::any(successList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailList") != m.end() && !m["FailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailList"].type()) {
        ConfirmTransferInEmailResponseBodyFailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailList"]));
        failList = make_shared<ConfirmTransferInEmailResponseBodyFailList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuccessList"].type()) {
        ConfirmTransferInEmailResponseBodySuccessList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuccessList"]));
        successList = make_shared<ConfirmTransferInEmailResponseBodySuccessList>(model1);
      }
    }
  }


  virtual ~ConfirmTransferInEmailResponseBody() = default;
};
class ConfirmTransferInEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmTransferInEmailResponseBody> body{};

  ConfirmTransferInEmailResponse() {}

  explicit ConfirmTransferInEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfirmTransferInEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmTransferInEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmTransferInEmailResponse() = default;
};
class DeleteContactTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> registrantProfileIds{};
  shared_ptr<string> userClientIp{};

  DeleteContactTemplatesRequest() {}

  explicit DeleteContactTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrantProfileIds) {
      res["RegistrantProfileIds"] = boost::any(*registrantProfileIds);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrantProfileIds") != m.end() && !m["RegistrantProfileIds"].empty()) {
      registrantProfileIds = make_shared<string>(boost::any_cast<string>(m["RegistrantProfileIds"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DeleteContactTemplatesRequest() = default;
};
class DeleteContactTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteContactTemplatesResponseBody() {}

  explicit DeleteContactTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteContactTemplatesResponseBody() = default;
};
class DeleteContactTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteContactTemplatesResponseBody> body{};

  DeleteContactTemplatesResponse() {}

  explicit DeleteContactTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteContactTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteContactTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteContactTemplatesResponse() = default;
};
class DeleteDomainGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainGroupId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  DeleteDomainGroupRequest() {}

  explicit DeleteDomainGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DeleteDomainGroupRequest() = default;
};
class DeleteDomainGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainGroupResponseBody() {}

  explicit DeleteDomainGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainGroupResponseBody() = default;
};
class DeleteDomainGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainGroupResponseBody> body{};

  DeleteDomainGroupResponse() {}

  explicit DeleteDomainGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDomainGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainGroupResponse() = default;
};
class DeleteEmailVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  DeleteEmailVerificationRequest() {}

  explicit DeleteEmailVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DeleteEmailVerificationRequest() = default;
};
class DeleteEmailVerificationResponseBodyFailList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  DeleteEmailVerificationResponseBodyFailList() {}

  explicit DeleteEmailVerificationResponseBodyFailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DeleteEmailVerificationResponseBodyFailList() = default;
};
class DeleteEmailVerificationResponseBodySuccessList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  DeleteEmailVerificationResponseBodySuccessList() {}

  explicit DeleteEmailVerificationResponseBodySuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DeleteEmailVerificationResponseBodySuccessList() = default;
};
class DeleteEmailVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteEmailVerificationResponseBodyFailList>> failList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DeleteEmailVerificationResponseBodySuccessList>> successList{};

  DeleteEmailVerificationResponseBody() {}

  explicit DeleteEmailVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failList) {
      vector<boost::any> temp1;
      for(auto item1:*failList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successList) {
      vector<boost::any> temp1;
      for(auto item1:*successList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuccessList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailList") != m.end() && !m["FailList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailList"].type()) {
        vector<DeleteEmailVerificationResponseBodyFailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteEmailVerificationResponseBodyFailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failList = make_shared<vector<DeleteEmailVerificationResponseBodyFailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(vector<boost::any>) == m["SuccessList"].type()) {
        vector<DeleteEmailVerificationResponseBodySuccessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuccessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteEmailVerificationResponseBodySuccessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successList = make_shared<vector<DeleteEmailVerificationResponseBodySuccessList>>(expect1);
      }
    }
  }


  virtual ~DeleteEmailVerificationResponseBody() = default;
};
class DeleteEmailVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEmailVerificationResponseBody> body{};

  DeleteEmailVerificationResponse() {}

  explicit DeleteEmailVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEmailVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEmailVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEmailVerificationResponse() = default;
};
class DeleteRegistrantProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> userClientIp{};

  DeleteRegistrantProfileRequest() {}

  explicit DeleteRegistrantProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DeleteRegistrantProfileRequest() = default;
};
class DeleteRegistrantProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRegistrantProfileResponseBody() {}

  explicit DeleteRegistrantProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRegistrantProfileResponseBody() = default;
};
class DeleteRegistrantProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRegistrantProfileResponseBody> body{};

  DeleteRegistrantProfileResponse() {}

  explicit DeleteRegistrantProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRegistrantProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRegistrantProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRegistrantProfileResponse() = default;
};
class EmailVerifiedRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  EmailVerifiedRequest() {}

  explicit EmailVerifiedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~EmailVerifiedRequest() = default;
};
class EmailVerifiedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EmailVerifiedResponseBody() {}

  explicit EmailVerifiedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EmailVerifiedResponseBody() = default;
};
class EmailVerifiedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EmailVerifiedResponseBody> body{};

  EmailVerifiedResponse() {}

  explicit EmailVerifiedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EmailVerifiedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EmailVerifiedResponseBody>(model1);
      }
    }
  }


  virtual ~EmailVerifiedResponse() = default;
};
class FuzzyMatchDomainSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  FuzzyMatchDomainSensitiveWordRequest() {}

  explicit FuzzyMatchDomainSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~FuzzyMatchDomainSensitiveWordRequest() = default;
};
class FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord : public Darabonba::Model {
public:
  shared_ptr<string> word{};

  FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord() {}

  explicit FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord() = default;
};
class FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords : public Darabonba::Model {
public:
  shared_ptr<vector<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord>> matchedSensitiveWord{};

  FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords() {}

  explicit FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchedSensitiveWord) {
      vector<boost::any> temp1;
      for(auto item1:*matchedSensitiveWord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchedSensitiveWord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchedSensitiveWord") != m.end() && !m["MatchedSensitiveWord"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchedSensitiveWord"].type()) {
        vector<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchedSensitiveWord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchedSensitiveWord = make_shared<vector<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWordsMatchedSensitiveWord>>(expect1);
      }
    }
  }


  virtual ~FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords() = default;
};
class FuzzyMatchDomainSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> exist{};
  shared_ptr<string> keyword{};
  shared_ptr<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords> matchedSentiveWords{};
  shared_ptr<string> requestId{};

  FuzzyMatchDomainSensitiveWordResponseBody() {}

  explicit FuzzyMatchDomainSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exist) {
      res["Exist"] = boost::any(*exist);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (matchedSentiveWords) {
      res["MatchedSentiveWords"] = matchedSentiveWords ? boost::any(matchedSentiveWords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exist") != m.end() && !m["Exist"].empty()) {
      exist = make_shared<bool>(boost::any_cast<bool>(m["Exist"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MatchedSentiveWords") != m.end() && !m["MatchedSentiveWords"].empty()) {
      if (typeid(map<string, boost::any>) == m["MatchedSentiveWords"].type()) {
        FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MatchedSentiveWords"]));
        matchedSentiveWords = make_shared<FuzzyMatchDomainSensitiveWordResponseBodyMatchedSentiveWords>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FuzzyMatchDomainSensitiveWordResponseBody() = default;
};
class FuzzyMatchDomainSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FuzzyMatchDomainSensitiveWordResponseBody> body{};

  FuzzyMatchDomainSensitiveWordResponse() {}

  explicit FuzzyMatchDomainSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FuzzyMatchDomainSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FuzzyMatchDomainSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~FuzzyMatchDomainSensitiveWordResponse() = default;
};
class GetOperationOssUploadPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditType{};
  shared_ptr<string> lang{};

  GetOperationOssUploadPolicyRequest() {}

  explicit GetOperationOssUploadPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~GetOperationOssUploadPolicyRequest() = default;
};
class GetOperationOssUploadPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> encodedPolicy{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> fileDir{};
  shared_ptr<string> host{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  GetOperationOssUploadPolicyResponseBody() {}

  explicit GetOperationOssUploadPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (encodedPolicy) {
      res["EncodedPolicy"] = boost::any(*encodedPolicy);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileDir) {
      res["FileDir"] = boost::any(*fileDir);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("EncodedPolicy") != m.end() && !m["EncodedPolicy"].empty()) {
      encodedPolicy = make_shared<string>(boost::any_cast<string>(m["EncodedPolicy"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("FileDir") != m.end() && !m["FileDir"].empty()) {
      fileDir = make_shared<string>(boost::any_cast<string>(m["FileDir"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GetOperationOssUploadPolicyResponseBody() = default;
};
class GetOperationOssUploadPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOperationOssUploadPolicyResponseBody> body{};

  GetOperationOssUploadPolicyResponse() {}

  explicit GetOperationOssUploadPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOperationOssUploadPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOperationOssUploadPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetOperationOssUploadPolicyResponse() = default;
};
class GetQualificationUploadPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  GetQualificationUploadPolicyRequest() {}

  explicit GetQualificationUploadPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~GetQualificationUploadPolicyRequest() = default;
};
class GetQualificationUploadPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> prefix{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  GetQualificationUploadPolicyResponseBody() {}

  explicit GetQualificationUploadPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GetQualificationUploadPolicyResponseBody() = default;
};
class GetQualificationUploadPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQualificationUploadPolicyResponseBody> body{};

  GetQualificationUploadPolicyResponse() {}

  explicit GetQualificationUploadPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQualificationUploadPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQualificationUploadPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetQualificationUploadPolicyResponse() = default;
};
class ListEmailVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginCreateTime{};
  shared_ptr<string> email{};
  shared_ptr<long> endCreateTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userClientIp{};
  shared_ptr<long> verificationStatus{};

  ListEmailVerificationRequest() {}

  explicit ListEmailVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginCreateTime) {
      res["BeginCreateTime"] = boost::any(*beginCreateTime);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endCreateTime) {
      res["EndCreateTime"] = boost::any(*endCreateTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginCreateTime") != m.end() && !m["BeginCreateTime"].empty()) {
      beginCreateTime = make_shared<long>(boost::any_cast<long>(m["BeginCreateTime"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndCreateTime") != m.end() && !m["EndCreateTime"].empty()) {
      endCreateTime = make_shared<long>(boost::any_cast<long>(m["EndCreateTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<long>(boost::any_cast<long>(m["VerificationStatus"]));
    }
  }


  virtual ~ListEmailVerificationRequest() = default;
};
class ListEmailVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> confirmIp{};
  shared_ptr<string> email{};
  shared_ptr<string> emailVerificationNo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> sendIp{};
  shared_ptr<string> tokenSendTime{};
  shared_ptr<string> userId{};
  shared_ptr<long> verificationStatus{};
  shared_ptr<string> verificationTime{};

  ListEmailVerificationResponseBodyData() {}

  explicit ListEmailVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confirmIp) {
      res["ConfirmIp"] = boost::any(*confirmIp);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerificationNo) {
      res["EmailVerificationNo"] = boost::any(*emailVerificationNo);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (sendIp) {
      res["SendIp"] = boost::any(*sendIp);
    }
    if (tokenSendTime) {
      res["TokenSendTime"] = boost::any(*tokenSendTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (verificationTime) {
      res["VerificationTime"] = boost::any(*verificationTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfirmIp") != m.end() && !m["ConfirmIp"].empty()) {
      confirmIp = make_shared<string>(boost::any_cast<string>(m["ConfirmIp"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerificationNo") != m.end() && !m["EmailVerificationNo"].empty()) {
      emailVerificationNo = make_shared<string>(boost::any_cast<string>(m["EmailVerificationNo"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("SendIp") != m.end() && !m["SendIp"].empty()) {
      sendIp = make_shared<string>(boost::any_cast<string>(m["SendIp"]));
    }
    if (m.find("TokenSendTime") != m.end() && !m["TokenSendTime"].empty()) {
      tokenSendTime = make_shared<string>(boost::any_cast<string>(m["TokenSendTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<long>(boost::any_cast<long>(m["VerificationStatus"]));
    }
    if (m.find("VerificationTime") != m.end() && !m["VerificationTime"].empty()) {
      verificationTime = make_shared<string>(boost::any_cast<string>(m["VerificationTime"]));
    }
  }


  virtual ~ListEmailVerificationResponseBodyData() = default;
};
class ListEmailVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<ListEmailVerificationResponseBodyData>> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  ListEmailVerificationResponseBody() {}

  explicit ListEmailVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEmailVerificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEmailVerificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEmailVerificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~ListEmailVerificationResponseBody() = default;
};
class ListEmailVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEmailVerificationResponseBody> body{};

  ListEmailVerificationResponse() {}

  explicit ListEmailVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEmailVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEmailVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ListEmailVerificationResponse() = default;
};
class ListServerLockRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginStartDate{};
  shared_ptr<string> domainName{};
  shared_ptr<long> endExpireDate{};
  shared_ptr<long> endStartDate{};
  shared_ptr<string> lang{};
  shared_ptr<string> lockProductId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> serverLockStatus{};
  shared_ptr<long> startExpireDate{};
  shared_ptr<string> userClientIp{};

  ListServerLockRequest() {}

  explicit ListServerLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginStartDate) {
      res["BeginStartDate"] = boost::any(*beginStartDate);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endExpireDate) {
      res["EndExpireDate"] = boost::any(*endExpireDate);
    }
    if (endStartDate) {
      res["EndStartDate"] = boost::any(*endStartDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (lockProductId) {
      res["LockProductId"] = boost::any(*lockProductId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serverLockStatus) {
      res["ServerLockStatus"] = boost::any(*serverLockStatus);
    }
    if (startExpireDate) {
      res["StartExpireDate"] = boost::any(*startExpireDate);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginStartDate") != m.end() && !m["BeginStartDate"].empty()) {
      beginStartDate = make_shared<long>(boost::any_cast<long>(m["BeginStartDate"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndExpireDate") != m.end() && !m["EndExpireDate"].empty()) {
      endExpireDate = make_shared<long>(boost::any_cast<long>(m["EndExpireDate"]));
    }
    if (m.find("EndStartDate") != m.end() && !m["EndStartDate"].empty()) {
      endStartDate = make_shared<long>(boost::any_cast<long>(m["EndStartDate"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LockProductId") != m.end() && !m["LockProductId"].empty()) {
      lockProductId = make_shared<string>(boost::any_cast<string>(m["LockProductId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServerLockStatus") != m.end() && !m["ServerLockStatus"].empty()) {
      serverLockStatus = make_shared<long>(boost::any_cast<long>(m["ServerLockStatus"]));
    }
    if (m.find("StartExpireDate") != m.end() && !m["StartExpireDate"].empty()) {
      startExpireDate = make_shared<long>(boost::any_cast<long>(m["StartExpireDate"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~ListServerLockRequest() = default;
};
class ListServerLockResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> domainInstanceId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> lockInstanceId{};
  shared_ptr<string> lockProductId{};
  shared_ptr<string> serverLockStatus{};
  shared_ptr<string> startDate{};
  shared_ptr<string> userId{};

  ListServerLockResponseBodyData() {}

  explicit ListServerLockResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInstanceId) {
      res["DomainInstanceId"] = boost::any(*domainInstanceId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lockInstanceId) {
      res["LockInstanceId"] = boost::any(*lockInstanceId);
    }
    if (lockProductId) {
      res["LockProductId"] = boost::any(*lockProductId);
    }
    if (serverLockStatus) {
      res["ServerLockStatus"] = boost::any(*serverLockStatus);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInstanceId") != m.end() && !m["DomainInstanceId"].empty()) {
      domainInstanceId = make_shared<string>(boost::any_cast<string>(m["DomainInstanceId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LockInstanceId") != m.end() && !m["LockInstanceId"].empty()) {
      lockInstanceId = make_shared<string>(boost::any_cast<string>(m["LockInstanceId"]));
    }
    if (m.find("LockProductId") != m.end() && !m["LockProductId"].empty()) {
      lockProductId = make_shared<string>(boost::any_cast<string>(m["LockProductId"]));
    }
    if (m.find("ServerLockStatus") != m.end() && !m["ServerLockStatus"].empty()) {
      serverLockStatus = make_shared<string>(boost::any_cast<string>(m["ServerLockStatus"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListServerLockResponseBodyData() = default;
};
class ListServerLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<ListServerLockResponseBodyData>> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  ListServerLockResponseBody() {}

  explicit ListServerLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListServerLockResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerLockResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServerLockResponseBodyData>>(expect1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~ListServerLockResponseBody() = default;
};
class ListServerLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServerLockResponseBody> body{};

  ListServerLockResponse() {}

  explicit ListServerLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServerLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerLockResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerLockResponse() = default;
};
class LookupTmchNoticeRequest : public Darabonba::Model {
public:
  shared_ptr<string> claimKey{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  LookupTmchNoticeRequest() {}

  explicit LookupTmchNoticeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimKey) {
      res["ClaimKey"] = boost::any(*claimKey);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimKey") != m.end() && !m["ClaimKey"].empty()) {
      claimKey = make_shared<string>(boost::any_cast<string>(m["ClaimKey"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~LookupTmchNoticeRequest() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc : public Darabonba::Model {
public:
  shared_ptr<long> classNum{};
  shared_ptr<string> desc{};

  LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classNum) {
      res["ClassNum"] = boost::any(*classNum);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassNum") != m.end() && !m["ClassNum"].empty()) {
      classNum = make_shared<long>(boost::any_cast<long>(m["ClassNum"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimClassDescs : public Darabonba::Model {
public:
  shared_ptr<vector<LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc>> classDesc{};

  LookupTmchNoticeResponseBodyClaimsClaimClassDescs() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimClassDescs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classDesc) {
      vector<boost::any> temp1;
      for(auto item1:*classDesc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClassDesc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassDesc") != m.end() && !m["ClassDesc"].empty()) {
      if (typeid(vector<boost::any>) == m["ClassDesc"].type()) {
        vector<LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClassDesc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        classDesc = make_shared<vector<LookupTmchNoticeResponseBodyClaimsClaimClassDescsClassDesc>>(expect1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimClassDescs() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> street{};

  LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (street) {
      res["Street"] = boost::any(*street);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Street"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Street"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      street = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr : public Darabonba::Model {
public:
  shared_ptr<string> cc{};
  shared_ptr<string> city{};
  shared_ptr<string> pc{};
  shared_ptr<string> sp{};
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet> street{};

  LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cc) {
      res["Cc"] = boost::any(*cc);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (pc) {
      res["Pc"] = boost::any(*pc);
    }
    if (sp) {
      res["Sp"] = boost::any(*sp);
    }
    if (street) {
      res["Street"] = street ? boost::any(street->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cc") != m.end() && !m["Cc"].empty()) {
      cc = make_shared<string>(boost::any_cast<string>(m["Cc"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Pc") != m.end() && !m["Pc"].empty()) {
      pc = make_shared<string>(boost::any_cast<string>(m["Pc"]));
    }
    if (m.find("Sp") != m.end() && !m["Sp"].empty()) {
      sp = make_shared<string>(boost::any_cast<string>(m["Sp"]));
    }
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      if (typeid(map<string, boost::any>) == m["Street"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Street"]));
        street = make_shared<LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddrStreet>(model1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimContactsContact : public Darabonba::Model {
public:
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr> addr{};
  shared_ptr<string> email{};
  shared_ptr<string> fax{};
  shared_ptr<string> name{};
  shared_ptr<string> org{};
  shared_ptr<string> type{};
  shared_ptr<string> voice{};

  LookupTmchNoticeResponseBodyClaimsClaimContactsContact() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimContactsContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addr) {
      res["Addr"] = addr ? boost::any(addr->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (fax) {
      res["Fax"] = boost::any(*fax);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (org) {
      res["Org"] = boost::any(*org);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addr") != m.end() && !m["Addr"].empty()) {
      if (typeid(map<string, boost::any>) == m["Addr"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Addr"]));
        addr = make_shared<LookupTmchNoticeResponseBodyClaimsClaimContactsContactAddr>(model1);
      }
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Fax") != m.end() && !m["Fax"].empty()) {
      fax = make_shared<string>(boost::any_cast<string>(m["Fax"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Org") != m.end() && !m["Org"].empty()) {
      org = make_shared<string>(boost::any_cast<string>(m["Org"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimContactsContact() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimContacts : public Darabonba::Model {
public:
  shared_ptr<vector<LookupTmchNoticeResponseBodyClaimsClaimContactsContact>> contact{};

  LookupTmchNoticeResponseBodyClaimsClaimContacts() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      vector<boost::any> temp1;
      for(auto item1:*contact){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contact"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      if (typeid(vector<boost::any>) == m["Contact"].type()) {
        vector<LookupTmchNoticeResponseBodyClaimsClaimContactsContact> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contact"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LookupTmchNoticeResponseBodyClaimsClaimContactsContact model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contact = make_shared<vector<LookupTmchNoticeResponseBodyClaimsClaimContactsContact>>(expect1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimContacts() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> street{};

  LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (street) {
      res["Street"] = boost::any(*street);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Street"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Street"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      street = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr : public Darabonba::Model {
public:
  shared_ptr<string> cc{};
  shared_ptr<string> city{};
  shared_ptr<string> pc{};
  shared_ptr<string> sp{};
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet> street{};

  LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cc) {
      res["Cc"] = boost::any(*cc);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (pc) {
      res["Pc"] = boost::any(*pc);
    }
    if (sp) {
      res["Sp"] = boost::any(*sp);
    }
    if (street) {
      res["Street"] = street ? boost::any(street->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cc") != m.end() && !m["Cc"].empty()) {
      cc = make_shared<string>(boost::any_cast<string>(m["Cc"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Pc") != m.end() && !m["Pc"].empty()) {
      pc = make_shared<string>(boost::any_cast<string>(m["Pc"]));
    }
    if (m.find("Sp") != m.end() && !m["Sp"].empty()) {
      sp = make_shared<string>(boost::any_cast<string>(m["Sp"]));
    }
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      if (typeid(map<string, boost::any>) == m["Street"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Street"]));
        street = make_shared<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddrStreet>(model1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder : public Darabonba::Model {
public:
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr> addr{};
  shared_ptr<string> entitlement{};
  shared_ptr<string> org{};

  LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addr) {
      res["Addr"] = addr ? boost::any(addr->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (entitlement) {
      res["Entitlement"] = boost::any(*entitlement);
    }
    if (org) {
      res["Org"] = boost::any(*org);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addr") != m.end() && !m["Addr"].empty()) {
      if (typeid(map<string, boost::any>) == m["Addr"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Addr"]));
        addr = make_shared<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolderAddr>(model1);
      }
    }
    if (m.find("Entitlement") != m.end() && !m["Entitlement"].empty()) {
      entitlement = make_shared<string>(boost::any_cast<string>(m["Entitlement"]));
    }
    if (m.find("Org") != m.end() && !m["Org"].empty()) {
      org = make_shared<string>(boost::any_cast<string>(m["Org"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimHolders : public Darabonba::Model {
public:
  shared_ptr<vector<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder>> holder{};

  LookupTmchNoticeResponseBodyClaimsClaimHolders() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimHolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (holder) {
      vector<boost::any> temp1;
      for(auto item1:*holder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Holder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Holder") != m.end() && !m["Holder"].empty()) {
      if (typeid(vector<boost::any>) == m["Holder"].type()) {
        vector<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Holder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        holder = make_shared<vector<LookupTmchNoticeResponseBodyClaimsClaimHoldersHolder>>(expect1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimHolders() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaimJurDesc : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> jurCC{};

  LookupTmchNoticeResponseBodyClaimsClaimJurDesc() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaimJurDesc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (jurCC) {
      res["JurCC"] = boost::any(*jurCC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("JurCC") != m.end() && !m["JurCC"].empty()) {
      jurCC = make_shared<string>(boost::any_cast<string>(m["JurCC"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaimJurDesc() = default;
};
class LookupTmchNoticeResponseBodyClaimsClaim : public Darabonba::Model {
public:
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimClassDescs> classDescs{};
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimContacts> contacts{};
  shared_ptr<string> goodsAndServices{};
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimHolders> holders{};
  shared_ptr<LookupTmchNoticeResponseBodyClaimsClaimJurDesc> jurDesc{};
  shared_ptr<string> markName{};

  LookupTmchNoticeResponseBodyClaimsClaim() {}

  explicit LookupTmchNoticeResponseBodyClaimsClaim(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classDescs) {
      res["ClassDescs"] = classDescs ? boost::any(classDescs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contacts) {
      res["Contacts"] = contacts ? boost::any(contacts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (goodsAndServices) {
      res["GoodsAndServices"] = boost::any(*goodsAndServices);
    }
    if (holders) {
      res["Holders"] = holders ? boost::any(holders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jurDesc) {
      res["JurDesc"] = jurDesc ? boost::any(jurDesc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (markName) {
      res["MarkName"] = boost::any(*markName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassDescs") != m.end() && !m["ClassDescs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClassDescs"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimClassDescs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClassDescs"]));
        classDescs = make_shared<LookupTmchNoticeResponseBodyClaimsClaimClassDescs>(model1);
      }
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Contacts"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimContacts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Contacts"]));
        contacts = make_shared<LookupTmchNoticeResponseBodyClaimsClaimContacts>(model1);
      }
    }
    if (m.find("GoodsAndServices") != m.end() && !m["GoodsAndServices"].empty()) {
      goodsAndServices = make_shared<string>(boost::any_cast<string>(m["GoodsAndServices"]));
    }
    if (m.find("Holders") != m.end() && !m["Holders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Holders"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimHolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Holders"]));
        holders = make_shared<LookupTmchNoticeResponseBodyClaimsClaimHolders>(model1);
      }
    }
    if (m.find("JurDesc") != m.end() && !m["JurDesc"].empty()) {
      if (typeid(map<string, boost::any>) == m["JurDesc"].type()) {
        LookupTmchNoticeResponseBodyClaimsClaimJurDesc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JurDesc"]));
        jurDesc = make_shared<LookupTmchNoticeResponseBodyClaimsClaimJurDesc>(model1);
      }
    }
    if (m.find("MarkName") != m.end() && !m["MarkName"].empty()) {
      markName = make_shared<string>(boost::any_cast<string>(m["MarkName"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaimsClaim() = default;
};
class LookupTmchNoticeResponseBodyClaims : public Darabonba::Model {
public:
  shared_ptr<vector<LookupTmchNoticeResponseBodyClaimsClaim>> claim{};

  LookupTmchNoticeResponseBodyClaims() {}

  explicit LookupTmchNoticeResponseBodyClaims(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claim) {
      vector<boost::any> temp1;
      for(auto item1:*claim){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Claim"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Claim") != m.end() && !m["Claim"].empty()) {
      if (typeid(vector<boost::any>) == m["Claim"].type()) {
        vector<LookupTmchNoticeResponseBodyClaimsClaim> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Claim"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LookupTmchNoticeResponseBodyClaimsClaim model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        claim = make_shared<vector<LookupTmchNoticeResponseBodyClaimsClaim>>(expect1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponseBodyClaims() = default;
};
class LookupTmchNoticeResponseBody : public Darabonba::Model {
public:
  shared_ptr<LookupTmchNoticeResponseBodyClaims> claims{};
  shared_ptr<long> id{};
  shared_ptr<string> label{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> requestId{};

  LookupTmchNoticeResponseBody() {}

  explicit LookupTmchNoticeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claims) {
      res["Claims"] = claims ? boost::any(claims->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Claims") != m.end() && !m["Claims"].empty()) {
      if (typeid(map<string, boost::any>) == m["Claims"].type()) {
        LookupTmchNoticeResponseBodyClaims model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Claims"]));
        claims = make_shared<LookupTmchNoticeResponseBodyClaims>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~LookupTmchNoticeResponseBody() = default;
};
class LookupTmchNoticeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LookupTmchNoticeResponseBody> body{};

  LookupTmchNoticeResponse() {}

  explicit LookupTmchNoticeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LookupTmchNoticeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LookupTmchNoticeResponseBody>(model1);
      }
    }
  }


  virtual ~LookupTmchNoticeResponse() = default;
};
class PollTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskResultStatus{};
  shared_ptr<string> userClientIp{};

  PollTaskResultRequest() {}

  explicit PollTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskResultStatus) {
      res["TaskResultStatus"] = boost::any(*taskResultStatus);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskResultStatus") != m.end() && !m["TaskResultStatus"].empty()) {
      taskResultStatus = make_shared<long>(boost::any_cast<long>(m["TaskResultStatus"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~PollTaskResultRequest() = default;
};
class PollTaskResultResponseBodyDataTaskDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  PollTaskResultResponseBodyDataTaskDetail() {}

  explicit PollTaskResultResponseBodyDataTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~PollTaskResultResponseBodyDataTaskDetail() = default;
};
class PollTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PollTaskResultResponseBodyDataTaskDetail>> taskDetail{};

  PollTaskResultResponseBodyData() {}

  explicit PollTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskDetail) {
      vector<boost::any> temp1;
      for(auto item1:*taskDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskDetail"].type()) {
        vector<PollTaskResultResponseBodyDataTaskDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PollTaskResultResponseBodyDataTaskDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskDetail = make_shared<vector<PollTaskResultResponseBodyDataTaskDetail>>(expect1);
      }
    }
  }


  virtual ~PollTaskResultResponseBodyData() = default;
};
class PollTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<PollTaskResultResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  PollTaskResultResponseBody() {}

  explicit PollTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PollTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PollTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~PollTaskResultResponseBody() = default;
};
class PollTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PollTaskResultResponseBody> body{};

  PollTaskResultResponse() {}

  explicit PollTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PollTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PollTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~PollTaskResultResponse() = default;
};
class QueryAdvancedDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainGroupId{};
  shared_ptr<bool> domainNameSort{};
  shared_ptr<long> domainStatus{};
  shared_ptr<long> endExpirationDate{};
  shared_ptr<long> endLength{};
  shared_ptr<long> endRegistrationDate{};
  shared_ptr<string> excluded{};
  shared_ptr<bool> excludedPrefix{};
  shared_ptr<bool> excludedSuffix{};
  shared_ptr<bool> expirationDateSort{};
  shared_ptr<long> form{};
  shared_ptr<string> keyWord{};
  shared_ptr<bool> keyWordPrefix{};
  shared_ptr<bool> keyWordSuffix{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productDomainType{};
  shared_ptr<bool> productDomainTypeSort{};
  shared_ptr<bool> registrationDateSort{};
  shared_ptr<long> startExpirationDate{};
  shared_ptr<long> startLength{};
  shared_ptr<long> startRegistrationDate{};
  shared_ptr<string> suffixs{};
  shared_ptr<long> tradeType{};
  shared_ptr<string> userClientIp{};

  QueryAdvancedDomainListRequest() {}

  explicit QueryAdvancedDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainNameSort) {
      res["DomainNameSort"] = boost::any(*domainNameSort);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (endExpirationDate) {
      res["EndExpirationDate"] = boost::any(*endExpirationDate);
    }
    if (endLength) {
      res["EndLength"] = boost::any(*endLength);
    }
    if (endRegistrationDate) {
      res["EndRegistrationDate"] = boost::any(*endRegistrationDate);
    }
    if (excluded) {
      res["Excluded"] = boost::any(*excluded);
    }
    if (excludedPrefix) {
      res["ExcludedPrefix"] = boost::any(*excludedPrefix);
    }
    if (excludedSuffix) {
      res["ExcludedSuffix"] = boost::any(*excludedSuffix);
    }
    if (expirationDateSort) {
      res["ExpirationDateSort"] = boost::any(*expirationDateSort);
    }
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (keyWordPrefix) {
      res["KeyWordPrefix"] = boost::any(*keyWordPrefix);
    }
    if (keyWordSuffix) {
      res["KeyWordSuffix"] = boost::any(*keyWordSuffix);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productDomainType) {
      res["ProductDomainType"] = boost::any(*productDomainType);
    }
    if (productDomainTypeSort) {
      res["ProductDomainTypeSort"] = boost::any(*productDomainTypeSort);
    }
    if (registrationDateSort) {
      res["RegistrationDateSort"] = boost::any(*registrationDateSort);
    }
    if (startExpirationDate) {
      res["StartExpirationDate"] = boost::any(*startExpirationDate);
    }
    if (startLength) {
      res["StartLength"] = boost::any(*startLength);
    }
    if (startRegistrationDate) {
      res["StartRegistrationDate"] = boost::any(*startRegistrationDate);
    }
    if (suffixs) {
      res["Suffixs"] = boost::any(*suffixs);
    }
    if (tradeType) {
      res["TradeType"] = boost::any(*tradeType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainNameSort") != m.end() && !m["DomainNameSort"].empty()) {
      domainNameSort = make_shared<bool>(boost::any_cast<bool>(m["DomainNameSort"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<long>(boost::any_cast<long>(m["DomainStatus"]));
    }
    if (m.find("EndExpirationDate") != m.end() && !m["EndExpirationDate"].empty()) {
      endExpirationDate = make_shared<long>(boost::any_cast<long>(m["EndExpirationDate"]));
    }
    if (m.find("EndLength") != m.end() && !m["EndLength"].empty()) {
      endLength = make_shared<long>(boost::any_cast<long>(m["EndLength"]));
    }
    if (m.find("EndRegistrationDate") != m.end() && !m["EndRegistrationDate"].empty()) {
      endRegistrationDate = make_shared<long>(boost::any_cast<long>(m["EndRegistrationDate"]));
    }
    if (m.find("Excluded") != m.end() && !m["Excluded"].empty()) {
      excluded = make_shared<string>(boost::any_cast<string>(m["Excluded"]));
    }
    if (m.find("ExcludedPrefix") != m.end() && !m["ExcludedPrefix"].empty()) {
      excludedPrefix = make_shared<bool>(boost::any_cast<bool>(m["ExcludedPrefix"]));
    }
    if (m.find("ExcludedSuffix") != m.end() && !m["ExcludedSuffix"].empty()) {
      excludedSuffix = make_shared<bool>(boost::any_cast<bool>(m["ExcludedSuffix"]));
    }
    if (m.find("ExpirationDateSort") != m.end() && !m["ExpirationDateSort"].empty()) {
      expirationDateSort = make_shared<bool>(boost::any_cast<bool>(m["ExpirationDateSort"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<long>(boost::any_cast<long>(m["Form"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("KeyWordPrefix") != m.end() && !m["KeyWordPrefix"].empty()) {
      keyWordPrefix = make_shared<bool>(boost::any_cast<bool>(m["KeyWordPrefix"]));
    }
    if (m.find("KeyWordSuffix") != m.end() && !m["KeyWordSuffix"].empty()) {
      keyWordSuffix = make_shared<bool>(boost::any_cast<bool>(m["KeyWordSuffix"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductDomainType") != m.end() && !m["ProductDomainType"].empty()) {
      productDomainType = make_shared<string>(boost::any_cast<string>(m["ProductDomainType"]));
    }
    if (m.find("ProductDomainTypeSort") != m.end() && !m["ProductDomainTypeSort"].empty()) {
      productDomainTypeSort = make_shared<bool>(boost::any_cast<bool>(m["ProductDomainTypeSort"]));
    }
    if (m.find("RegistrationDateSort") != m.end() && !m["RegistrationDateSort"].empty()) {
      registrationDateSort = make_shared<bool>(boost::any_cast<bool>(m["RegistrationDateSort"]));
    }
    if (m.find("StartExpirationDate") != m.end() && !m["StartExpirationDate"].empty()) {
      startExpirationDate = make_shared<long>(boost::any_cast<long>(m["StartExpirationDate"]));
    }
    if (m.find("StartLength") != m.end() && !m["StartLength"].empty()) {
      startLength = make_shared<long>(boost::any_cast<long>(m["StartLength"]));
    }
    if (m.find("StartRegistrationDate") != m.end() && !m["StartRegistrationDate"].empty()) {
      startRegistrationDate = make_shared<long>(boost::any_cast<long>(m["StartRegistrationDate"]));
    }
    if (m.find("Suffixs") != m.end() && !m["Suffixs"].empty()) {
      suffixs = make_shared<string>(boost::any_cast<string>(m["Suffixs"]));
    }
    if (m.find("TradeType") != m.end() && !m["TradeType"].empty()) {
      tradeType = make_shared<long>(boost::any_cast<long>(m["TradeType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryAdvancedDomainListRequest() = default;
};
class QueryAdvancedDomainListResponseBodyDataDomainDnsList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dns{};

  QueryAdvancedDomainListResponseBodyDataDomainDnsList() {}

  explicit QueryAdvancedDomainListResponseBodyDataDomainDnsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dns = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryAdvancedDomainListResponseBodyDataDomainDnsList() = default;
};
class QueryAdvancedDomainListResponseBodyDataDomain : public Darabonba::Model {
public:
  shared_ptr<QueryAdvancedDomainListResponseBodyDataDomainDnsList> dnsList{};
  shared_ptr<string> domainAuditStatus{};
  shared_ptr<string> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<string> email{};
  shared_ptr<long> expirationCurrDateDiff{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> expirationDateStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> premium{};
  shared_ptr<string> productId{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> registrationDate{};
  shared_ptr<long> registrationDateLong{};
  shared_ptr<string> remark{};
  shared_ptr<string> zhRegistrantOrganization{};

  QueryAdvancedDomainListResponseBodyDataDomain() {}

  explicit QueryAdvancedDomainListResponseBodyDataDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["DnsList"] = dnsList ? boost::any(dnsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainAuditStatus) {
      res["DomainAuditStatus"] = boost::any(*domainAuditStatus);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (expirationCurrDateDiff) {
      res["ExpirationCurrDateDiff"] = boost::any(*expirationCurrDateDiff);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (expirationDateStatus) {
      res["ExpirationDateStatus"] = boost::any(*expirationDateStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (registrationDate) {
      res["RegistrationDate"] = boost::any(*registrationDate);
    }
    if (registrationDateLong) {
      res["RegistrationDateLong"] = boost::any(*registrationDateLong);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsList") != m.end() && !m["DnsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsList"].type()) {
        QueryAdvancedDomainListResponseBodyDataDomainDnsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsList"]));
        dnsList = make_shared<QueryAdvancedDomainListResponseBodyDataDomainDnsList>(model1);
      }
    }
    if (m.find("DomainAuditStatus") != m.end() && !m["DomainAuditStatus"].empty()) {
      domainAuditStatus = make_shared<string>(boost::any_cast<string>(m["DomainAuditStatus"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<string>(boost::any_cast<string>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExpirationCurrDateDiff") != m.end() && !m["ExpirationCurrDateDiff"].empty()) {
      expirationCurrDateDiff = make_shared<long>(boost::any_cast<long>(m["ExpirationCurrDateDiff"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("ExpirationDateStatus") != m.end() && !m["ExpirationDateStatus"].empty()) {
      expirationDateStatus = make_shared<string>(boost::any_cast<string>(m["ExpirationDateStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("RegistrationDate") != m.end() && !m["RegistrationDate"].empty()) {
      registrationDate = make_shared<string>(boost::any_cast<string>(m["RegistrationDate"]));
    }
    if (m.find("RegistrationDateLong") != m.end() && !m["RegistrationDateLong"].empty()) {
      registrationDateLong = make_shared<long>(boost::any_cast<long>(m["RegistrationDateLong"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~QueryAdvancedDomainListResponseBodyDataDomain() = default;
};
class QueryAdvancedDomainListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAdvancedDomainListResponseBodyDataDomain>> domain{};

  QueryAdvancedDomainListResponseBodyData() {}

  explicit QueryAdvancedDomainListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      vector<boost::any> temp1;
      for(auto item1:*domain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<QueryAdvancedDomainListResponseBodyDataDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAdvancedDomainListResponseBodyDataDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<QueryAdvancedDomainListResponseBodyDataDomain>>(expect1);
      }
    }
  }


  virtual ~QueryAdvancedDomainListResponseBodyData() = default;
};
class QueryAdvancedDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryAdvancedDomainListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryAdvancedDomainListResponseBody() {}

  explicit QueryAdvancedDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAdvancedDomainListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAdvancedDomainListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryAdvancedDomainListResponseBody() = default;
};
class QueryAdvancedDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAdvancedDomainListResponseBody> body{};

  QueryAdvancedDomainListResponse() {}

  explicit QueryAdvancedDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryAdvancedDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAdvancedDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAdvancedDomainListResponse() = default;
};
class QueryArtExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryArtExtensionRequest() {}

  explicit QueryArtExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryArtExtensionRequest() = default;
};
class QueryArtExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dateOrPeriod{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> features{};
  shared_ptr<string> inscriptionsAndMarkings{};
  shared_ptr<string> maker{};
  shared_ptr<string> materialsAndTechniques{};
  shared_ptr<string> objectType{};
  shared_ptr<string> reference{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subject{};
  shared_ptr<string> title{};

  QueryArtExtensionResponseBody() {}

  explicit QueryArtExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateOrPeriod) {
      res["DateOrPeriod"] = boost::any(*dateOrPeriod);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (inscriptionsAndMarkings) {
      res["InscriptionsAndMarkings"] = boost::any(*inscriptionsAndMarkings);
    }
    if (maker) {
      res["Maker"] = boost::any(*maker);
    }
    if (materialsAndTechniques) {
      res["MaterialsAndTechniques"] = boost::any(*materialsAndTechniques);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (reference) {
      res["Reference"] = boost::any(*reference);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateOrPeriod") != m.end() && !m["DateOrPeriod"].empty()) {
      dateOrPeriod = make_shared<string>(boost::any_cast<string>(m["DateOrPeriod"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      features = make_shared<string>(boost::any_cast<string>(m["Features"]));
    }
    if (m.find("InscriptionsAndMarkings") != m.end() && !m["InscriptionsAndMarkings"].empty()) {
      inscriptionsAndMarkings = make_shared<string>(boost::any_cast<string>(m["InscriptionsAndMarkings"]));
    }
    if (m.find("Maker") != m.end() && !m["Maker"].empty()) {
      maker = make_shared<string>(boost::any_cast<string>(m["Maker"]));
    }
    if (m.find("MaterialsAndTechniques") != m.end() && !m["MaterialsAndTechniques"].empty()) {
      materialsAndTechniques = make_shared<string>(boost::any_cast<string>(m["MaterialsAndTechniques"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Reference") != m.end() && !m["Reference"].empty()) {
      reference = make_shared<string>(boost::any_cast<string>(m["Reference"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~QueryArtExtensionResponseBody() = default;
};
class QueryArtExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryArtExtensionResponseBody> body{};

  QueryArtExtensionResponse() {}

  explicit QueryArtExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryArtExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryArtExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryArtExtensionResponse() = default;
};
class QueryChangeLogListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> endDate{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startDate{};
  shared_ptr<string> userClientIp{};

  QueryChangeLogListRequest() {}

  explicit QueryChangeLogListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryChangeLogListRequest() = default;
};
class QueryChangeLogListResponseBodyDataChangeLog : public Darabonba::Model {
public:
  shared_ptr<string> details{};
  shared_ptr<string> domainName{};
  shared_ptr<string> operation{};
  shared_ptr<string> operationIPAddress{};
  shared_ptr<string> result{};
  shared_ptr<string> time{};

  QueryChangeLogListResponseBodyDataChangeLog() {}

  explicit QueryChangeLogListResponseBodyDataChangeLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (operationIPAddress) {
      res["OperationIPAddress"] = boost::any(*operationIPAddress);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("OperationIPAddress") != m.end() && !m["OperationIPAddress"].empty()) {
      operationIPAddress = make_shared<string>(boost::any_cast<string>(m["OperationIPAddress"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryChangeLogListResponseBodyDataChangeLog() = default;
};
class QueryChangeLogListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryChangeLogListResponseBodyDataChangeLog>> changeLog{};

  QueryChangeLogListResponseBodyData() {}

  explicit QueryChangeLogListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeLog) {
      vector<boost::any> temp1;
      for(auto item1:*changeLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeLog") != m.end() && !m["ChangeLog"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeLog"].type()) {
        vector<QueryChangeLogListResponseBodyDataChangeLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryChangeLogListResponseBodyDataChangeLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeLog = make_shared<vector<QueryChangeLogListResponseBodyDataChangeLog>>(expect1);
      }
    }
  }


  virtual ~QueryChangeLogListResponseBodyData() = default;
};
class QueryChangeLogListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryChangeLogListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> resultLimit{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryChangeLogListResponseBody() {}

  explicit QueryChangeLogListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultLimit) {
      res["ResultLimit"] = boost::any(*resultLimit);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryChangeLogListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryChangeLogListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultLimit") != m.end() && !m["ResultLimit"].empty()) {
      resultLimit = make_shared<bool>(boost::any_cast<bool>(m["ResultLimit"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryChangeLogListResponseBody() = default;
};
class QueryChangeLogListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChangeLogListResponseBody> body{};

  QueryChangeLogListResponse() {}

  explicit QueryChangeLogListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryChangeLogListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChangeLogListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChangeLogListResponse() = default;
};
class QueryContactInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactType{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryContactInfoRequest() {}

  explicit QueryContactInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<string>(boost::any_cast<string>(m["ContactType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryContactInfoRequest() = default;
};
class QueryContactInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> createDate{};
  shared_ptr<string> email{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> requestId{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  QueryContactInfoResponseBody() {}

  explicit QueryContactInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~QueryContactInfoResponseBody() = default;
};
class QueryContactInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryContactInfoResponseBody> body{};

  QueryContactInfoResponse() {}

  explicit QueryContactInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryContactInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryContactInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryContactInfoResponse() = default;
};
class QueryDSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDSRecordRequest() {}

  explicit QueryDSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDSRecordRequest() = default;
};
class QueryDSRecordResponseBodyDSRecordList : public Darabonba::Model {
public:
  shared_ptr<long> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<long> digestType{};
  shared_ptr<long> keyTag{};

  QueryDSRecordResponseBodyDSRecordList() {}

  explicit QueryDSRecordResponseBodyDSRecordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (digestType) {
      res["DigestType"] = boost::any(*digestType);
    }
    if (keyTag) {
      res["KeyTag"] = boost::any(*keyTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<long>(boost::any_cast<long>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("DigestType") != m.end() && !m["DigestType"].empty()) {
      digestType = make_shared<long>(boost::any_cast<long>(m["DigestType"]));
    }
    if (m.find("KeyTag") != m.end() && !m["KeyTag"].empty()) {
      keyTag = make_shared<long>(boost::any_cast<long>(m["KeyTag"]));
    }
  }


  virtual ~QueryDSRecordResponseBodyDSRecordList() = default;
};
class QueryDSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDSRecordResponseBodyDSRecordList>> DSRecordList{};
  shared_ptr<string> requestId{};

  QueryDSRecordResponseBody() {}

  explicit QueryDSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DSRecordList) {
      vector<boost::any> temp1;
      for(auto item1:*DSRecordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DSRecordList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DSRecordList") != m.end() && !m["DSRecordList"].empty()) {
      if (typeid(vector<boost::any>) == m["DSRecordList"].type()) {
        vector<QueryDSRecordResponseBodyDSRecordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DSRecordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDSRecordResponseBodyDSRecordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DSRecordList = make_shared<vector<QueryDSRecordResponseBodyDSRecordList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDSRecordResponseBody() = default;
};
class QueryDSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDSRecordResponseBody> body{};

  QueryDSRecordResponse() {}

  explicit QueryDSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDSRecordResponse() = default;
};
class QueryDnsHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDnsHostRequest() {}

  explicit QueryDnsHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDnsHostRequest() = default;
};
class QueryDnsHostResponseBodyDnsHostList : public Darabonba::Model {
public:
  shared_ptr<string> dnsName{};
  shared_ptr<vector<string>> ipList{};

  QueryDnsHostResponseBodyDnsHostList() {}

  explicit QueryDnsHostResponseBodyDnsHostList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDnsHostResponseBodyDnsHostList() = default;
};
class QueryDnsHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDnsHostResponseBodyDnsHostList>> dnsHostList{};
  shared_ptr<string> requestId{};

  QueryDnsHostResponseBody() {}

  explicit QueryDnsHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsHostList) {
      vector<boost::any> temp1;
      for(auto item1:*dnsHostList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DnsHostList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsHostList") != m.end() && !m["DnsHostList"].empty()) {
      if (typeid(vector<boost::any>) == m["DnsHostList"].type()) {
        vector<QueryDnsHostResponseBodyDnsHostList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DnsHostList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDnsHostResponseBodyDnsHostList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsHostList = make_shared<vector<QueryDnsHostResponseBodyDnsHostList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDnsHostResponseBody() = default;
};
class QueryDnsHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDnsHostResponseBody> body{};

  QueryDnsHostResponse() {}

  explicit QueryDnsHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDnsHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDnsHostResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDnsHostResponse() = default;
};
class QueryDomainAdminDivisionRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDomainAdminDivisionRequest() {}

  explicit QueryDomainAdminDivisionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainAdminDivisionRequest() = default;
};
class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren : public Darabonba::Model {
public:
  shared_ptr<string> childDivisionName{};

  QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren() {}

  explicit QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childDivisionName) {
      res["ChildDivisionName"] = boost::any(*childDivisionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildDivisionName") != m.end() && !m["ChildDivisionName"].empty()) {
      childDivisionName = make_shared<string>(boost::any_cast<string>(m["ChildDivisionName"]));
    }
  }


  virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren() = default;
};
class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren>> children{};

  QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren() {}

  explicit QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (children) {
      vector<boost::any> temp1;
      for(auto item1:*children){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Children"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(vector<boost::any>) == m["Children"].type()) {
        vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Children"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        children = make_shared<vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren>>(expect1);
      }
    }
  }


  virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren() = default;
};
class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision : public Darabonba::Model {
public:
  shared_ptr<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren> children{};
  shared_ptr<string> divisionName{};

  QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision() {}

  explicit QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (children) {
      res["Children"] = children ? boost::any(children->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (divisionName) {
      res["DivisionName"] = boost::any(*divisionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Children") != m.end() && !m["Children"].empty()) {
      if (typeid(map<string, boost::any>) == m["Children"].type()) {
        QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Children"]));
        children = make_shared<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren>(model1);
      }
    }
    if (m.find("DivisionName") != m.end() && !m["DivisionName"].empty()) {
      divisionName = make_shared<string>(boost::any_cast<string>(m["DivisionName"]));
    }
  }


  virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision() = default;
};
class QueryDomainAdminDivisionResponseBodyAdminDivisions : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision>> adminDivision{};

  QueryDomainAdminDivisionResponseBodyAdminDivisions() {}

  explicit QueryDomainAdminDivisionResponseBodyAdminDivisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminDivision) {
      vector<boost::any> temp1;
      for(auto item1:*adminDivision){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdminDivision"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminDivision") != m.end() && !m["AdminDivision"].empty()) {
      if (typeid(vector<boost::any>) == m["AdminDivision"].type()) {
        vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdminDivision"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adminDivision = make_shared<vector<QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision>>(expect1);
      }
    }
  }


  virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisions() = default;
};
class QueryDomainAdminDivisionResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDomainAdminDivisionResponseBodyAdminDivisions> adminDivisions{};
  shared_ptr<string> requestId{};

  QueryDomainAdminDivisionResponseBody() {}

  explicit QueryDomainAdminDivisionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminDivisions) {
      res["AdminDivisions"] = adminDivisions ? boost::any(adminDivisions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminDivisions") != m.end() && !m["AdminDivisions"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdminDivisions"].type()) {
        QueryDomainAdminDivisionResponseBodyAdminDivisions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdminDivisions"]));
        adminDivisions = make_shared<QueryDomainAdminDivisionResponseBodyAdminDivisions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDomainAdminDivisionResponseBody() = default;
};
class QueryDomainAdminDivisionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainAdminDivisionResponseBody> body{};

  QueryDomainAdminDivisionResponse() {}

  explicit QueryDomainAdminDivisionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainAdminDivisionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainAdminDivisionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainAdminDivisionResponse() = default;
};
class QueryDomainByDomainNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDomainByDomainNameRequest() {}

  explicit QueryDomainByDomainNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainByDomainNameRequest() = default;
};
class QueryDomainByDomainNameResponseBodyDnsList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dns{};

  QueryDomainByDomainNameResponseBodyDnsList() {}

  explicit QueryDomainByDomainNameResponseBodyDnsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dns = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDomainByDomainNameResponseBodyDnsList() = default;
};
class QueryDomainByDomainNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDomainByDomainNameResponseBodyDnsList> dnsList{};
  shared_ptr<long> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> domainNameProxyService{};
  shared_ptr<string> domainNameVerificationStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerificationClientHold{};
  shared_ptr<long> emailVerificationStatus{};
  shared_ptr<long> expirationCurrDateDiff{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> expirationDateStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> premium{};
  shared_ptr<string> realNameStatus{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> registrantUpdatingStatus{};
  shared_ptr<string> registrationDate{};
  shared_ptr<long> registrationDateLong{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferOutStatus{};
  shared_ptr<string> transferProhibitionLock{};
  shared_ptr<string> updateProhibitionLock{};
  shared_ptr<string> userId{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};
  shared_ptr<string> domainStatus{};

  QueryDomainByDomainNameResponseBody() {}

  explicit QueryDomainByDomainNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["DnsList"] = dnsList ? boost::any(dnsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameProxyService) {
      res["DomainNameProxyService"] = boost::any(*domainNameProxyService);
    }
    if (domainNameVerificationStatus) {
      res["DomainNameVerificationStatus"] = boost::any(*domainNameVerificationStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerificationClientHold) {
      res["EmailVerificationClientHold"] = boost::any(*emailVerificationClientHold);
    }
    if (emailVerificationStatus) {
      res["EmailVerificationStatus"] = boost::any(*emailVerificationStatus);
    }
    if (expirationCurrDateDiff) {
      res["ExpirationCurrDateDiff"] = boost::any(*expirationCurrDateDiff);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (expirationDateStatus) {
      res["ExpirationDateStatus"] = boost::any(*expirationDateStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (realNameStatus) {
      res["RealNameStatus"] = boost::any(*realNameStatus);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (registrantUpdatingStatus) {
      res["RegistrantUpdatingStatus"] = boost::any(*registrantUpdatingStatus);
    }
    if (registrationDate) {
      res["RegistrationDate"] = boost::any(*registrationDate);
    }
    if (registrationDateLong) {
      res["RegistrationDateLong"] = boost::any(*registrationDateLong);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferOutStatus) {
      res["TransferOutStatus"] = boost::any(*transferOutStatus);
    }
    if (transferProhibitionLock) {
      res["TransferProhibitionLock"] = boost::any(*transferProhibitionLock);
    }
    if (updateProhibitionLock) {
      res["UpdateProhibitionLock"] = boost::any(*updateProhibitionLock);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    if (domainStatus) {
      res["domainStatus"] = boost::any(*domainStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsList") != m.end() && !m["DnsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsList"].type()) {
        QueryDomainByDomainNameResponseBodyDnsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsList"]));
        dnsList = make_shared<QueryDomainByDomainNameResponseBodyDnsList>(model1);
      }
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameProxyService") != m.end() && !m["DomainNameProxyService"].empty()) {
      domainNameProxyService = make_shared<bool>(boost::any_cast<bool>(m["DomainNameProxyService"]));
    }
    if (m.find("DomainNameVerificationStatus") != m.end() && !m["DomainNameVerificationStatus"].empty()) {
      domainNameVerificationStatus = make_shared<string>(boost::any_cast<string>(m["DomainNameVerificationStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerificationClientHold") != m.end() && !m["EmailVerificationClientHold"].empty()) {
      emailVerificationClientHold = make_shared<bool>(boost::any_cast<bool>(m["EmailVerificationClientHold"]));
    }
    if (m.find("EmailVerificationStatus") != m.end() && !m["EmailVerificationStatus"].empty()) {
      emailVerificationStatus = make_shared<long>(boost::any_cast<long>(m["EmailVerificationStatus"]));
    }
    if (m.find("ExpirationCurrDateDiff") != m.end() && !m["ExpirationCurrDateDiff"].empty()) {
      expirationCurrDateDiff = make_shared<long>(boost::any_cast<long>(m["ExpirationCurrDateDiff"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("ExpirationDateStatus") != m.end() && !m["ExpirationDateStatus"].empty()) {
      expirationDateStatus = make_shared<string>(boost::any_cast<string>(m["ExpirationDateStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("RealNameStatus") != m.end() && !m["RealNameStatus"].empty()) {
      realNameStatus = make_shared<string>(boost::any_cast<string>(m["RealNameStatus"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("RegistrantUpdatingStatus") != m.end() && !m["RegistrantUpdatingStatus"].empty()) {
      registrantUpdatingStatus = make_shared<string>(boost::any_cast<string>(m["RegistrantUpdatingStatus"]));
    }
    if (m.find("RegistrationDate") != m.end() && !m["RegistrationDate"].empty()) {
      registrationDate = make_shared<string>(boost::any_cast<string>(m["RegistrationDate"]));
    }
    if (m.find("RegistrationDateLong") != m.end() && !m["RegistrationDateLong"].empty()) {
      registrationDateLong = make_shared<long>(boost::any_cast<long>(m["RegistrationDateLong"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferOutStatus") != m.end() && !m["TransferOutStatus"].empty()) {
      transferOutStatus = make_shared<string>(boost::any_cast<string>(m["TransferOutStatus"]));
    }
    if (m.find("TransferProhibitionLock") != m.end() && !m["TransferProhibitionLock"].empty()) {
      transferProhibitionLock = make_shared<string>(boost::any_cast<string>(m["TransferProhibitionLock"]));
    }
    if (m.find("UpdateProhibitionLock") != m.end() && !m["UpdateProhibitionLock"].empty()) {
      updateProhibitionLock = make_shared<string>(boost::any_cast<string>(m["UpdateProhibitionLock"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
    if (m.find("domainStatus") != m.end() && !m["domainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["domainStatus"]));
    }
  }


  virtual ~QueryDomainByDomainNameResponseBody() = default;
};
class QueryDomainByDomainNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainByDomainNameResponseBody> body{};

  QueryDomainByDomainNameResponse() {}

  explicit QueryDomainByDomainNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainByDomainNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainByDomainNameResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainByDomainNameResponse() = default;
};
class QueryDomainByInstanceIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDomainByInstanceIdRequest() {}

  explicit QueryDomainByInstanceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainByInstanceIdRequest() = default;
};
class QueryDomainByInstanceIdResponseBodyDnsList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dns{};

  QueryDomainByInstanceIdResponseBodyDnsList() {}

  explicit QueryDomainByInstanceIdResponseBodyDnsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dns = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDomainByInstanceIdResponseBodyDnsList() = default;
};
class QueryDomainByInstanceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDomainByInstanceIdResponseBodyDnsList> dnsList{};
  shared_ptr<long> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> domainNameProxyService{};
  shared_ptr<string> domainNameVerificationStatus{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerificationClientHold{};
  shared_ptr<long> emailVerificationStatus{};
  shared_ptr<long> expirationCurrDateDiff{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> expirationDateStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> premium{};
  shared_ptr<string> realNameStatus{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> registrantUpdatingStatus{};
  shared_ptr<string> registrationDate{};
  shared_ptr<long> registrationDateLong{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferOutStatus{};
  shared_ptr<string> transferProhibitionLock{};
  shared_ptr<string> updateProhibitionLock{};
  shared_ptr<string> userId{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  QueryDomainByInstanceIdResponseBody() {}

  explicit QueryDomainByInstanceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["DnsList"] = dnsList ? boost::any(dnsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameProxyService) {
      res["DomainNameProxyService"] = boost::any(*domainNameProxyService);
    }
    if (domainNameVerificationStatus) {
      res["DomainNameVerificationStatus"] = boost::any(*domainNameVerificationStatus);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerificationClientHold) {
      res["EmailVerificationClientHold"] = boost::any(*emailVerificationClientHold);
    }
    if (emailVerificationStatus) {
      res["EmailVerificationStatus"] = boost::any(*emailVerificationStatus);
    }
    if (expirationCurrDateDiff) {
      res["ExpirationCurrDateDiff"] = boost::any(*expirationCurrDateDiff);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (expirationDateStatus) {
      res["ExpirationDateStatus"] = boost::any(*expirationDateStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (realNameStatus) {
      res["RealNameStatus"] = boost::any(*realNameStatus);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (registrantUpdatingStatus) {
      res["RegistrantUpdatingStatus"] = boost::any(*registrantUpdatingStatus);
    }
    if (registrationDate) {
      res["RegistrationDate"] = boost::any(*registrationDate);
    }
    if (registrationDateLong) {
      res["RegistrationDateLong"] = boost::any(*registrationDateLong);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferOutStatus) {
      res["TransferOutStatus"] = boost::any(*transferOutStatus);
    }
    if (transferProhibitionLock) {
      res["TransferProhibitionLock"] = boost::any(*transferProhibitionLock);
    }
    if (updateProhibitionLock) {
      res["UpdateProhibitionLock"] = boost::any(*updateProhibitionLock);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsList") != m.end() && !m["DnsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsList"].type()) {
        QueryDomainByInstanceIdResponseBodyDnsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsList"]));
        dnsList = make_shared<QueryDomainByInstanceIdResponseBodyDnsList>(model1);
      }
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameProxyService") != m.end() && !m["DomainNameProxyService"].empty()) {
      domainNameProxyService = make_shared<bool>(boost::any_cast<bool>(m["DomainNameProxyService"]));
    }
    if (m.find("DomainNameVerificationStatus") != m.end() && !m["DomainNameVerificationStatus"].empty()) {
      domainNameVerificationStatus = make_shared<string>(boost::any_cast<string>(m["DomainNameVerificationStatus"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerificationClientHold") != m.end() && !m["EmailVerificationClientHold"].empty()) {
      emailVerificationClientHold = make_shared<bool>(boost::any_cast<bool>(m["EmailVerificationClientHold"]));
    }
    if (m.find("EmailVerificationStatus") != m.end() && !m["EmailVerificationStatus"].empty()) {
      emailVerificationStatus = make_shared<long>(boost::any_cast<long>(m["EmailVerificationStatus"]));
    }
    if (m.find("ExpirationCurrDateDiff") != m.end() && !m["ExpirationCurrDateDiff"].empty()) {
      expirationCurrDateDiff = make_shared<long>(boost::any_cast<long>(m["ExpirationCurrDateDiff"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("ExpirationDateStatus") != m.end() && !m["ExpirationDateStatus"].empty()) {
      expirationDateStatus = make_shared<string>(boost::any_cast<string>(m["ExpirationDateStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("RealNameStatus") != m.end() && !m["RealNameStatus"].empty()) {
      realNameStatus = make_shared<string>(boost::any_cast<string>(m["RealNameStatus"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("RegistrantUpdatingStatus") != m.end() && !m["RegistrantUpdatingStatus"].empty()) {
      registrantUpdatingStatus = make_shared<string>(boost::any_cast<string>(m["RegistrantUpdatingStatus"]));
    }
    if (m.find("RegistrationDate") != m.end() && !m["RegistrationDate"].empty()) {
      registrationDate = make_shared<string>(boost::any_cast<string>(m["RegistrationDate"]));
    }
    if (m.find("RegistrationDateLong") != m.end() && !m["RegistrationDateLong"].empty()) {
      registrationDateLong = make_shared<long>(boost::any_cast<long>(m["RegistrationDateLong"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferOutStatus") != m.end() && !m["TransferOutStatus"].empty()) {
      transferOutStatus = make_shared<string>(boost::any_cast<string>(m["TransferOutStatus"]));
    }
    if (m.find("TransferProhibitionLock") != m.end() && !m["TransferProhibitionLock"].empty()) {
      transferProhibitionLock = make_shared<string>(boost::any_cast<string>(m["TransferProhibitionLock"]));
    }
    if (m.find("UpdateProhibitionLock") != m.end() && !m["UpdateProhibitionLock"].empty()) {
      updateProhibitionLock = make_shared<string>(boost::any_cast<string>(m["UpdateProhibitionLock"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~QueryDomainByInstanceIdResponseBody() = default;
};
class QueryDomainByInstanceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainByInstanceIdResponseBody> body{};

  QueryDomainByInstanceIdResponse() {}

  explicit QueryDomainByInstanceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainByInstanceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainByInstanceIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainByInstanceIdResponse() = default;
};
class QueryDomainGroupListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> showDeletingGroup{};
  shared_ptr<string> userClientIp{};

  QueryDomainGroupListRequest() {}

  explicit QueryDomainGroupListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (showDeletingGroup) {
      res["ShowDeletingGroup"] = boost::any(*showDeletingGroup);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ShowDeletingGroup") != m.end() && !m["ShowDeletingGroup"].empty()) {
      showDeletingGroup = make_shared<bool>(boost::any_cast<bool>(m["ShowDeletingGroup"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainGroupListRequest() = default;
};
class QueryDomainGroupListResponseBodyDataDomainGroup : public Darabonba::Model {
public:
  shared_ptr<bool> beingDeleted{};
  shared_ptr<string> creationDate{};
  shared_ptr<string> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainGroupStatus{};
  shared_ptr<string> modificationDate{};
  shared_ptr<long> totalNumber{};

  QueryDomainGroupListResponseBodyDataDomainGroup() {}

  explicit QueryDomainGroupListResponseBodyDataDomainGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beingDeleted) {
      res["BeingDeleted"] = boost::any(*beingDeleted);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainGroupStatus) {
      res["DomainGroupStatus"] = boost::any(*domainGroupStatus);
    }
    if (modificationDate) {
      res["ModificationDate"] = boost::any(*modificationDate);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeingDeleted") != m.end() && !m["BeingDeleted"].empty()) {
      beingDeleted = make_shared<bool>(boost::any_cast<bool>(m["BeingDeleted"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<string>(boost::any_cast<string>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainGroupStatus") != m.end() && !m["DomainGroupStatus"].empty()) {
      domainGroupStatus = make_shared<string>(boost::any_cast<string>(m["DomainGroupStatus"]));
    }
    if (m.find("ModificationDate") != m.end() && !m["ModificationDate"].empty()) {
      modificationDate = make_shared<string>(boost::any_cast<string>(m["ModificationDate"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~QueryDomainGroupListResponseBodyDataDomainGroup() = default;
};
class QueryDomainGroupListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainGroupListResponseBodyDataDomainGroup>> domainGroup{};

  QueryDomainGroupListResponseBodyData() {}

  explicit QueryDomainGroupListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroup) {
      vector<boost::any> temp1;
      for(auto item1:*domainGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroup") != m.end() && !m["DomainGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainGroup"].type()) {
        vector<QueryDomainGroupListResponseBodyDataDomainGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainGroupListResponseBodyDataDomainGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainGroup = make_shared<vector<QueryDomainGroupListResponseBodyDataDomainGroup>>(expect1);
      }
    }
  }


  virtual ~QueryDomainGroupListResponseBodyData() = default;
};
class QueryDomainGroupListResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDomainGroupListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  QueryDomainGroupListResponseBody() {}

  explicit QueryDomainGroupListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDomainGroupListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDomainGroupListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDomainGroupListResponseBody() = default;
};
class QueryDomainGroupListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainGroupListResponseBody> body{};

  QueryDomainGroupListResponse() {}

  explicit QueryDomainGroupListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainGroupListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainGroupListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainGroupListResponse() = default;
};
class QueryDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainGroupId{};
  shared_ptr<string> domainName{};
  shared_ptr<long> endExpirationDate{};
  shared_ptr<long> endRegistrationDate{};
  shared_ptr<string> lang{};
  shared_ptr<string> orderByType{};
  shared_ptr<string> orderKeyType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productDomainType{};
  shared_ptr<string> queryType{};
  shared_ptr<long> startExpirationDate{};
  shared_ptr<long> startRegistrationDate{};
  shared_ptr<string> userClientIp{};

  QueryDomainListRequest() {}

  explicit QueryDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endExpirationDate) {
      res["EndExpirationDate"] = boost::any(*endExpirationDate);
    }
    if (endRegistrationDate) {
      res["EndRegistrationDate"] = boost::any(*endRegistrationDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderByType) {
      res["OrderByType"] = boost::any(*orderByType);
    }
    if (orderKeyType) {
      res["OrderKeyType"] = boost::any(*orderKeyType);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productDomainType) {
      res["ProductDomainType"] = boost::any(*productDomainType);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (startExpirationDate) {
      res["StartExpirationDate"] = boost::any(*startExpirationDate);
    }
    if (startRegistrationDate) {
      res["StartRegistrationDate"] = boost::any(*startRegistrationDate);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<string>(boost::any_cast<string>(m["DomainGroupId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndExpirationDate") != m.end() && !m["EndExpirationDate"].empty()) {
      endExpirationDate = make_shared<long>(boost::any_cast<long>(m["EndExpirationDate"]));
    }
    if (m.find("EndRegistrationDate") != m.end() && !m["EndRegistrationDate"].empty()) {
      endRegistrationDate = make_shared<long>(boost::any_cast<long>(m["EndRegistrationDate"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderByType") != m.end() && !m["OrderByType"].empty()) {
      orderByType = make_shared<string>(boost::any_cast<string>(m["OrderByType"]));
    }
    if (m.find("OrderKeyType") != m.end() && !m["OrderKeyType"].empty()) {
      orderKeyType = make_shared<string>(boost::any_cast<string>(m["OrderKeyType"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductDomainType") != m.end() && !m["ProductDomainType"].empty()) {
      productDomainType = make_shared<string>(boost::any_cast<string>(m["ProductDomainType"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("StartExpirationDate") != m.end() && !m["StartExpirationDate"].empty()) {
      startExpirationDate = make_shared<long>(boost::any_cast<long>(m["StartExpirationDate"]));
    }
    if (m.find("StartRegistrationDate") != m.end() && !m["StartRegistrationDate"].empty()) {
      startRegistrationDate = make_shared<long>(boost::any_cast<long>(m["StartRegistrationDate"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainListRequest() = default;
};
class QueryDomainListResponseBodyDataDomain : public Darabonba::Model {
public:
  shared_ptr<string> domainAuditStatus{};
  shared_ptr<string> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<long> expirationCurrDateDiff{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> expirationDateStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> premium{};
  shared_ptr<string> productId{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> registrationDate{};
  shared_ptr<long> registrationDateLong{};
  shared_ptr<string> remark{};

  QueryDomainListResponseBodyDataDomain() {}

  explicit QueryDomainListResponseBodyDataDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainAuditStatus) {
      res["DomainAuditStatus"] = boost::any(*domainAuditStatus);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (expirationCurrDateDiff) {
      res["ExpirationCurrDateDiff"] = boost::any(*expirationCurrDateDiff);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (expirationDateStatus) {
      res["ExpirationDateStatus"] = boost::any(*expirationDateStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (registrationDate) {
      res["RegistrationDate"] = boost::any(*registrationDate);
    }
    if (registrationDateLong) {
      res["RegistrationDateLong"] = boost::any(*registrationDateLong);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainAuditStatus") != m.end() && !m["DomainAuditStatus"].empty()) {
      domainAuditStatus = make_shared<string>(boost::any_cast<string>(m["DomainAuditStatus"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<string>(boost::any_cast<string>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("ExpirationCurrDateDiff") != m.end() && !m["ExpirationCurrDateDiff"].empty()) {
      expirationCurrDateDiff = make_shared<long>(boost::any_cast<long>(m["ExpirationCurrDateDiff"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("ExpirationDateStatus") != m.end() && !m["ExpirationDateStatus"].empty()) {
      expirationDateStatus = make_shared<string>(boost::any_cast<string>(m["ExpirationDateStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("RegistrationDate") != m.end() && !m["RegistrationDate"].empty()) {
      registrationDate = make_shared<string>(boost::any_cast<string>(m["RegistrationDate"]));
    }
    if (m.find("RegistrationDateLong") != m.end() && !m["RegistrationDateLong"].empty()) {
      registrationDateLong = make_shared<long>(boost::any_cast<long>(m["RegistrationDateLong"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~QueryDomainListResponseBodyDataDomain() = default;
};
class QueryDomainListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainListResponseBodyDataDomain>> domain{};

  QueryDomainListResponseBodyData() {}

  explicit QueryDomainListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      vector<boost::any> temp1;
      for(auto item1:*domain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<QueryDomainListResponseBodyDataDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainListResponseBodyDataDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<QueryDomainListResponseBodyDataDomain>>(expect1);
      }
    }
  }


  virtual ~QueryDomainListResponseBodyData() = default;
};
class QueryDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryDomainListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryDomainListResponseBody() {}

  explicit QueryDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDomainListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDomainListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryDomainListResponseBody() = default;
};
class QueryDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainListResponseBody> body{};

  QueryDomainListResponse() {}

  explicit QueryDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainListResponse() = default;
};
class QueryDomainRealNameVerificationInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<bool> fetchImage{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDomainRealNameVerificationInfoRequest() {}

  explicit QueryDomainRealNameVerificationInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (fetchImage) {
      res["FetchImage"] = boost::any(*fetchImage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("FetchImage") != m.end() && !m["FetchImage"].empty()) {
      fetchImage = make_shared<bool>(boost::any_cast<bool>(m["FetchImage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainRealNameVerificationInfoRequest() = default;
};
class QueryDomainRealNameVerificationInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> identityCredentialUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> submissionDate{};

  QueryDomainRealNameVerificationInfoResponseBody() {}

  explicit QueryDomainRealNameVerificationInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (identityCredentialUrl) {
      res["IdentityCredentialUrl"] = boost::any(*identityCredentialUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submissionDate) {
      res["SubmissionDate"] = boost::any(*submissionDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("IdentityCredentialUrl") != m.end() && !m["IdentityCredentialUrl"].empty()) {
      identityCredentialUrl = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubmissionDate") != m.end() && !m["SubmissionDate"].empty()) {
      submissionDate = make_shared<string>(boost::any_cast<string>(m["SubmissionDate"]));
    }
  }


  virtual ~QueryDomainRealNameVerificationInfoResponseBody() = default;
};
class QueryDomainRealNameVerificationInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainRealNameVerificationInfoResponseBody> body{};

  QueryDomainRealNameVerificationInfoResponse() {}

  explicit QueryDomainRealNameVerificationInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainRealNameVerificationInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainRealNameVerificationInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainRealNameVerificationInfoResponse() = default;
};
class QueryDomainSuffixRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryDomainSuffixRequest() {}

  explicit QueryDomainSuffixRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryDomainSuffixRequest() = default;
};
class QueryDomainSuffixResponseBodySuffixList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> suffix{};

  QueryDomainSuffixResponseBodySuffixList() {}

  explicit QueryDomainSuffixResponseBodySuffixList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suffix) {
      res["Suffix"] = boost::any(*suffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Suffix") != m.end() && !m["Suffix"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Suffix"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Suffix"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      suffix = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDomainSuffixResponseBodySuffixList() = default;
};
class QueryDomainSuffixResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDomainSuffixResponseBodySuffixList> suffixList{};

  QueryDomainSuffixResponseBody() {}

  explicit QueryDomainSuffixResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (suffixList) {
      res["SuffixList"] = suffixList ? boost::any(suffixList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuffixList") != m.end() && !m["SuffixList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuffixList"].type()) {
        QueryDomainSuffixResponseBodySuffixList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuffixList"]));
        suffixList = make_shared<QueryDomainSuffixResponseBodySuffixList>(model1);
      }
    }
  }


  virtual ~QueryDomainSuffixResponseBody() = default;
};
class QueryDomainSuffixResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainSuffixResponseBody> body{};

  QueryDomainSuffixResponse() {}

  explicit QueryDomainSuffixResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainSuffixResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainSuffixResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainSuffixResponse() = default;
};
class QueryEmailVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryEmailVerificationRequest() {}

  explicit QueryEmailVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryEmailVerificationRequest() = default;
};
class QueryEmailVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> confirmIp{};
  shared_ptr<string> email{};
  shared_ptr<string> emailVerificationNo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sendIp{};
  shared_ptr<string> tokenSendTime{};
  shared_ptr<string> userId{};
  shared_ptr<long> verificationStatus{};
  shared_ptr<string> verificationTime{};

  QueryEmailVerificationResponseBody() {}

  explicit QueryEmailVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confirmIp) {
      res["ConfirmIp"] = boost::any(*confirmIp);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerificationNo) {
      res["EmailVerificationNo"] = boost::any(*emailVerificationNo);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sendIp) {
      res["SendIp"] = boost::any(*sendIp);
    }
    if (tokenSendTime) {
      res["TokenSendTime"] = boost::any(*tokenSendTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (verificationTime) {
      res["VerificationTime"] = boost::any(*verificationTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfirmIp") != m.end() && !m["ConfirmIp"].empty()) {
      confirmIp = make_shared<string>(boost::any_cast<string>(m["ConfirmIp"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerificationNo") != m.end() && !m["EmailVerificationNo"].empty()) {
      emailVerificationNo = make_shared<string>(boost::any_cast<string>(m["EmailVerificationNo"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SendIp") != m.end() && !m["SendIp"].empty()) {
      sendIp = make_shared<string>(boost::any_cast<string>(m["SendIp"]));
    }
    if (m.find("TokenSendTime") != m.end() && !m["TokenSendTime"].empty()) {
      tokenSendTime = make_shared<string>(boost::any_cast<string>(m["TokenSendTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<long>(boost::any_cast<long>(m["VerificationStatus"]));
    }
    if (m.find("VerificationTime") != m.end() && !m["VerificationTime"].empty()) {
      verificationTime = make_shared<string>(boost::any_cast<string>(m["VerificationTime"]));
    }
  }


  virtual ~QueryEmailVerificationResponseBody() = default;
};
class QueryEmailVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEmailVerificationResponseBody> body{};

  QueryEmailVerificationResponse() {}

  explicit QueryEmailVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEmailVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEmailVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEmailVerificationResponse() = default;
};
class QueryEnsAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryEnsAssociationRequest() {}

  explicit QueryEnsAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryEnsAssociationRequest() = default;
};
class QueryEnsAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> requestId{};

  QueryEnsAssociationResponseBody() {}

  explicit QueryEnsAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryEnsAssociationResponseBody() = default;
};
class QueryEnsAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEnsAssociationResponseBody> body{};

  QueryEnsAssociationResponse() {}

  explicit QueryEnsAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEnsAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEnsAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEnsAssociationResponse() = default;
};
class QueryFailReasonForDomainRealNameVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> realNameVerificationAction{};
  shared_ptr<string> userClientIp{};

  QueryFailReasonForDomainRealNameVerificationRequest() {}

  explicit QueryFailReasonForDomainRealNameVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (realNameVerificationAction) {
      res["RealNameVerificationAction"] = boost::any(*realNameVerificationAction);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RealNameVerificationAction") != m.end() && !m["RealNameVerificationAction"].empty()) {
      realNameVerificationAction = make_shared<string>(boost::any_cast<string>(m["RealNameVerificationAction"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryFailReasonForDomainRealNameVerificationRequest() = default;
};
class QueryFailReasonForDomainRealNameVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> domainNameVerificationStatus{};
  shared_ptr<string> failReason{};

  QueryFailReasonForDomainRealNameVerificationResponseBodyData() {}

  explicit QueryFailReasonForDomainRealNameVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (domainNameVerificationStatus) {
      res["DomainNameVerificationStatus"] = boost::any(*domainNameVerificationStatus);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DomainNameVerificationStatus") != m.end() && !m["DomainNameVerificationStatus"].empty()) {
      domainNameVerificationStatus = make_shared<string>(boost::any_cast<string>(m["DomainNameVerificationStatus"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
  }


  virtual ~QueryFailReasonForDomainRealNameVerificationResponseBodyData() = default;
};
class QueryFailReasonForDomainRealNameVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFailReasonForDomainRealNameVerificationResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  QueryFailReasonForDomainRealNameVerificationResponseBody() {}

  explicit QueryFailReasonForDomainRealNameVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryFailReasonForDomainRealNameVerificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFailReasonForDomainRealNameVerificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryFailReasonForDomainRealNameVerificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryFailReasonForDomainRealNameVerificationResponseBody() = default;
};
class QueryFailReasonForDomainRealNameVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFailReasonForDomainRealNameVerificationResponseBody> body{};

  QueryFailReasonForDomainRealNameVerificationResponse() {}

  explicit QueryFailReasonForDomainRealNameVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFailReasonForDomainRealNameVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFailReasonForDomainRealNameVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFailReasonForDomainRealNameVerificationResponse() = default;
};
class QueryFailReasonForRegistrantProfileRealNameVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileID{};
  shared_ptr<string> userClientIp{};

  QueryFailReasonForRegistrantProfileRealNameVerificationRequest() {}

  explicit QueryFailReasonForRegistrantProfileRealNameVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileID) {
      res["RegistrantProfileID"] = boost::any(*registrantProfileID);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileID") != m.end() && !m["RegistrantProfileID"].empty()) {
      registrantProfileID = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileID"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryFailReasonForRegistrantProfileRealNameVerificationRequest() = default;
};
class QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> failReason{};

  QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData() {}

  explicit QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
  }


  virtual ~QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData() = default;
};
class QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody() {}

  explicit QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryFailReasonForRegistrantProfileRealNameVerificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody() = default;
};
class QueryFailReasonForRegistrantProfileRealNameVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody> body{};

  QueryFailReasonForRegistrantProfileRealNameVerificationResponse() {}

  explicit QueryFailReasonForRegistrantProfileRealNameVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFailReasonForRegistrantProfileRealNameVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFailReasonForRegistrantProfileRealNameVerificationResponse() = default;
};
class QueryFailingReasonListForQualificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> limit{};
  shared_ptr<string> qualificationType{};
  shared_ptr<string> userClientIp{};

  QueryFailingReasonListForQualificationRequest() {}

  explicit QueryFailingReasonListForQualificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (qualificationType) {
      res["QualificationType"] = boost::any(*qualificationType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("QualificationType") != m.end() && !m["QualificationType"].empty()) {
      qualificationType = make_shared<string>(boost::any_cast<string>(m["QualificationType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryFailingReasonListForQualificationRequest() = default;
};
class QueryFailingReasonListForQualificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> failReason{};

  QueryFailingReasonListForQualificationResponseBodyData() {}

  explicit QueryFailingReasonListForQualificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
  }


  virtual ~QueryFailingReasonListForQualificationResponseBodyData() = default;
};
class QueryFailingReasonListForQualificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFailingReasonListForQualificationResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  QueryFailingReasonListForQualificationResponseBody() {}

  explicit QueryFailingReasonListForQualificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryFailingReasonListForQualificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFailingReasonListForQualificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryFailingReasonListForQualificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryFailingReasonListForQualificationResponseBody() = default;
};
class QueryFailingReasonListForQualificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFailingReasonListForQualificationResponseBody> body{};

  QueryFailingReasonListForQualificationResponse() {}

  explicit QueryFailingReasonListForQualificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFailingReasonListForQualificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFailingReasonListForQualificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFailingReasonListForQualificationResponse() = default;
};
class QueryLocalEnsAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryLocalEnsAssociationRequest() {}

  explicit QueryLocalEnsAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryLocalEnsAssociationRequest() = default;
};
class QueryLocalEnsAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> requestId{};

  QueryLocalEnsAssociationResponseBody() {}

  explicit QueryLocalEnsAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryLocalEnsAssociationResponseBody() = default;
};
class QueryLocalEnsAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLocalEnsAssociationResponseBody> body{};

  QueryLocalEnsAssociationResponse() {}

  explicit QueryLocalEnsAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryLocalEnsAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLocalEnsAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLocalEnsAssociationResponse() = default;
};
class QueryOperationAuditInfoDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditRecordId{};
  shared_ptr<string> lang{};

  QueryOperationAuditInfoDetailRequest() {}

  explicit QueryOperationAuditInfoDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRecordId) {
      res["AuditRecordId"] = boost::any(*auditRecordId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRecordId") != m.end() && !m["AuditRecordId"].empty()) {
      auditRecordId = make_shared<long>(boost::any_cast<long>(m["AuditRecordId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~QueryOperationAuditInfoDetailRequest() = default;
};
class QueryOperationAuditInfoDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> auditInfo{};
  shared_ptr<long> auditStatus{};
  shared_ptr<long> auditType{};
  shared_ptr<string> businessName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> id{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<long> updateTime{};

  QueryOperationAuditInfoDetailResponseBody() {}

  explicit QueryOperationAuditInfoDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditInfo) {
      res["AuditInfo"] = boost::any(*auditInfo);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditInfo") != m.end() && !m["AuditInfo"].empty()) {
      auditInfo = make_shared<string>(boost::any_cast<string>(m["AuditInfo"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~QueryOperationAuditInfoDetailResponseBody() = default;
};
class QueryOperationAuditInfoDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOperationAuditInfoDetailResponseBody> body{};

  QueryOperationAuditInfoDetailResponse() {}

  explicit QueryOperationAuditInfoDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOperationAuditInfoDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOperationAuditInfoDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOperationAuditInfoDetailResponse() = default;
};
class QueryOperationAuditInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> auditType{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryOperationAuditInfoListRequest() {}

  explicit QueryOperationAuditInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryOperationAuditInfoListRequest() = default;
};
class QueryOperationAuditInfoListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditInfo{};
  shared_ptr<long> auditStatus{};
  shared_ptr<long> auditType{};
  shared_ptr<string> businessName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<long> id{};
  shared_ptr<string> remark{};
  shared_ptr<long> updateTime{};

  QueryOperationAuditInfoListResponseBodyData() {}

  explicit QueryOperationAuditInfoListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditInfo) {
      res["AuditInfo"] = boost::any(*auditInfo);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditInfo") != m.end() && !m["AuditInfo"].empty()) {
      auditInfo = make_shared<string>(boost::any_cast<string>(m["AuditInfo"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~QueryOperationAuditInfoListResponseBodyData() = default;
};
class QueryOperationAuditInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<vector<QueryOperationAuditInfoListResponseBodyData>> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryOperationAuditInfoListResponseBody() {}

  explicit QueryOperationAuditInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryOperationAuditInfoListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOperationAuditInfoListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryOperationAuditInfoListResponseBodyData>>(expect1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryOperationAuditInfoListResponseBody() = default;
};
class QueryOperationAuditInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOperationAuditInfoListResponseBody> body{};

  QueryOperationAuditInfoListResponse() {}

  explicit QueryOperationAuditInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOperationAuditInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOperationAuditInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOperationAuditInfoListResponse() = default;
};
class QueryQualificationDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> qualificationType{};
  shared_ptr<string> userClientIp{};

  QueryQualificationDetailRequest() {}

  explicit QueryQualificationDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (qualificationType) {
      res["QualificationType"] = boost::any(*qualificationType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("QualificationType") != m.end() && !m["QualificationType"].empty()) {
      qualificationType = make_shared<string>(boost::any_cast<string>(m["QualificationType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryQualificationDetailRequest() = default;
};
class QueryQualificationDetailResponseBodyCredentialsQualificationCredential : public Darabonba::Model {
public:
  shared_ptr<string> credentialNo{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> credentialUrl{};

  QueryQualificationDetailResponseBodyCredentialsQualificationCredential() {}

  explicit QueryQualificationDetailResponseBodyCredentialsQualificationCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialNo) {
      res["CredentialNo"] = boost::any(*credentialNo);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (credentialUrl) {
      res["CredentialUrl"] = boost::any(*credentialUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialNo") != m.end() && !m["CredentialNo"].empty()) {
      credentialNo = make_shared<string>(boost::any_cast<string>(m["CredentialNo"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("CredentialUrl") != m.end() && !m["CredentialUrl"].empty()) {
      credentialUrl = make_shared<string>(boost::any_cast<string>(m["CredentialUrl"]));
    }
  }


  virtual ~QueryQualificationDetailResponseBodyCredentialsQualificationCredential() = default;
};
class QueryQualificationDetailResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<vector<QueryQualificationDetailResponseBodyCredentialsQualificationCredential>> qualificationCredential{};

  QueryQualificationDetailResponseBodyCredentials() {}

  explicit QueryQualificationDetailResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualificationCredential) {
      vector<boost::any> temp1;
      for(auto item1:*qualificationCredential){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualificationCredential"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualificationCredential") != m.end() && !m["QualificationCredential"].empty()) {
      if (typeid(vector<boost::any>) == m["QualificationCredential"].type()) {
        vector<QueryQualificationDetailResponseBodyCredentialsQualificationCredential> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualificationCredential"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryQualificationDetailResponseBodyCredentialsQualificationCredential model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualificationCredential = make_shared<vector<QueryQualificationDetailResponseBodyCredentialsQualificationCredential>>(expect1);
      }
    }
  }


  virtual ~QueryQualificationDetailResponseBodyCredentials() = default;
};
class QueryQualificationDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<QueryQualificationDetailResponseBodyCredentials> credentials{};
  shared_ptr<string> requestId{};
  shared_ptr<string> trackId{};

  QueryQualificationDetailResponseBody() {}

  explicit QueryQualificationDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        QueryQualificationDetailResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<QueryQualificationDetailResponseBodyCredentials>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<string>(boost::any_cast<string>(m["TrackId"]));
    }
  }


  virtual ~QueryQualificationDetailResponseBody() = default;
};
class QueryQualificationDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryQualificationDetailResponseBody> body{};

  QueryQualificationDetailResponse() {}

  explicit QueryQualificationDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryQualificationDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryQualificationDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryQualificationDetailResponse() = default;
};
class QueryRegistrantProfileRealNameVerificationInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fetchImage{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> userClientIp{};

  QueryRegistrantProfileRealNameVerificationInfoRequest() {}

  explicit QueryRegistrantProfileRealNameVerificationInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchImage) {
      res["FetchImage"] = boost::any(*fetchImage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchImage") != m.end() && !m["FetchImage"].empty()) {
      fetchImage = make_shared<bool>(boost::any_cast<bool>(m["FetchImage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryRegistrantProfileRealNameVerificationInfoRequest() = default;
};
class QueryRegistrantProfileRealNameVerificationInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> identityCredentialUrl{};
  shared_ptr<string> modificationDate{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> submissionDate{};

  QueryRegistrantProfileRealNameVerificationInfoResponseBody() {}

  explicit QueryRegistrantProfileRealNameVerificationInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (identityCredentialUrl) {
      res["IdentityCredentialUrl"] = boost::any(*identityCredentialUrl);
    }
    if (modificationDate) {
      res["ModificationDate"] = boost::any(*modificationDate);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submissionDate) {
      res["SubmissionDate"] = boost::any(*submissionDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("IdentityCredentialUrl") != m.end() && !m["IdentityCredentialUrl"].empty()) {
      identityCredentialUrl = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialUrl"]));
    }
    if (m.find("ModificationDate") != m.end() && !m["ModificationDate"].empty()) {
      modificationDate = make_shared<string>(boost::any_cast<string>(m["ModificationDate"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubmissionDate") != m.end() && !m["SubmissionDate"].empty()) {
      submissionDate = make_shared<string>(boost::any_cast<string>(m["SubmissionDate"]));
    }
  }


  virtual ~QueryRegistrantProfileRealNameVerificationInfoResponseBody() = default;
};
class QueryRegistrantProfileRealNameVerificationInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRegistrantProfileRealNameVerificationInfoResponseBody> body{};

  QueryRegistrantProfileRealNameVerificationInfoResponse() {}

  explicit QueryRegistrantProfileRealNameVerificationInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRegistrantProfileRealNameVerificationInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRegistrantProfileRealNameVerificationInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRegistrantProfileRealNameVerificationInfoResponse() = default;
};
class QueryRegistrantProfilesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> defaultRegistrantProfile{};
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> realNameStatus{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantProfileType{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhRegistrantOrganization{};

  QueryRegistrantProfilesRequest() {}

  explicit QueryRegistrantProfilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRegistrantProfile) {
      res["DefaultRegistrantProfile"] = boost::any(*defaultRegistrantProfile);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (realNameStatus) {
      res["RealNameStatus"] = boost::any(*realNameStatus);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantProfileType) {
      res["RegistrantProfileType"] = boost::any(*registrantProfileType);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRegistrantProfile") != m.end() && !m["DefaultRegistrantProfile"].empty()) {
      defaultRegistrantProfile = make_shared<bool>(boost::any_cast<bool>(m["DefaultRegistrantProfile"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RealNameStatus") != m.end() && !m["RealNameStatus"].empty()) {
      realNameStatus = make_shared<string>(boost::any_cast<string>(m["RealNameStatus"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantProfileType") != m.end() && !m["RegistrantProfileType"].empty()) {
      registrantProfileType = make_shared<string>(boost::any_cast<string>(m["RegistrantProfileType"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~QueryRegistrantProfilesRequest() = default;
};
class QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultRegistrantProfile{};
  shared_ptr<string> email{};
  shared_ptr<long> emailVerificationStatus{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> realNameStatus{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantProfileType{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile() {}

  explicit QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultRegistrantProfile) {
      res["DefaultRegistrantProfile"] = boost::any(*defaultRegistrantProfile);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (emailVerificationStatus) {
      res["EmailVerificationStatus"] = boost::any(*emailVerificationStatus);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (realNameStatus) {
      res["RealNameStatus"] = boost::any(*realNameStatus);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantProfileType) {
      res["RegistrantProfileType"] = boost::any(*registrantProfileType);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultRegistrantProfile") != m.end() && !m["DefaultRegistrantProfile"].empty()) {
      defaultRegistrantProfile = make_shared<bool>(boost::any_cast<bool>(m["DefaultRegistrantProfile"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EmailVerificationStatus") != m.end() && !m["EmailVerificationStatus"].empty()) {
      emailVerificationStatus = make_shared<long>(boost::any_cast<long>(m["EmailVerificationStatus"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RealNameStatus") != m.end() && !m["RealNameStatus"].empty()) {
      realNameStatus = make_shared<string>(boost::any_cast<string>(m["RealNameStatus"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantProfileType") != m.end() && !m["RegistrantProfileType"].empty()) {
      registrantProfileType = make_shared<string>(boost::any_cast<string>(m["RegistrantProfileType"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile() = default;
};
class QueryRegistrantProfilesResponseBodyRegistrantProfiles : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile>> registrantProfile{};

  QueryRegistrantProfilesResponseBodyRegistrantProfiles() {}

  explicit QueryRegistrantProfilesResponseBodyRegistrantProfiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrantProfile) {
      vector<boost::any> temp1;
      for(auto item1:*registrantProfile){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegistrantProfile"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrantProfile") != m.end() && !m["RegistrantProfile"].empty()) {
      if (typeid(vector<boost::any>) == m["RegistrantProfile"].type()) {
        vector<QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegistrantProfile"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        registrantProfile = make_shared<vector<QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile>>(expect1);
      }
    }
  }


  virtual ~QueryRegistrantProfilesResponseBodyRegistrantProfiles() = default;
};
class QueryRegistrantProfilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<QueryRegistrantProfilesResponseBodyRegistrantProfiles> registrantProfiles{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryRegistrantProfilesResponseBody() {}

  explicit QueryRegistrantProfilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (registrantProfiles) {
      res["RegistrantProfiles"] = registrantProfiles ? boost::any(registrantProfiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RegistrantProfiles") != m.end() && !m["RegistrantProfiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegistrantProfiles"].type()) {
        QueryRegistrantProfilesResponseBodyRegistrantProfiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegistrantProfiles"]));
        registrantProfiles = make_shared<QueryRegistrantProfilesResponseBodyRegistrantProfiles>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryRegistrantProfilesResponseBody() = default;
};
class QueryRegistrantProfilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRegistrantProfilesResponseBody> body{};

  QueryRegistrantProfilesResponse() {}

  explicit QueryRegistrantProfilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRegistrantProfilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRegistrantProfilesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRegistrantProfilesResponse() = default;
};
class QueryServerLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryServerLockRequest() {}

  explicit QueryServerLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryServerLockRequest() = default;
};
class QueryServerLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainInstanceId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> lockInstanceId{};
  shared_ptr<string> lockProductId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> serverLockStatus{};
  shared_ptr<string> startDate{};
  shared_ptr<string> userId{};

  QueryServerLockResponseBody() {}

  explicit QueryServerLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInstanceId) {
      res["DomainInstanceId"] = boost::any(*domainInstanceId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lockInstanceId) {
      res["LockInstanceId"] = boost::any(*lockInstanceId);
    }
    if (lockProductId) {
      res["LockProductId"] = boost::any(*lockProductId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverLockStatus) {
      res["ServerLockStatus"] = boost::any(*serverLockStatus);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInstanceId") != m.end() && !m["DomainInstanceId"].empty()) {
      domainInstanceId = make_shared<string>(boost::any_cast<string>(m["DomainInstanceId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LockInstanceId") != m.end() && !m["LockInstanceId"].empty()) {
      lockInstanceId = make_shared<string>(boost::any_cast<string>(m["LockInstanceId"]));
    }
    if (m.find("LockProductId") != m.end() && !m["LockProductId"].empty()) {
      lockProductId = make_shared<string>(boost::any_cast<string>(m["LockProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerLockStatus") != m.end() && !m["ServerLockStatus"].empty()) {
      serverLockStatus = make_shared<long>(boost::any_cast<long>(m["ServerLockStatus"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryServerLockResponseBody() = default;
};
class QueryServerLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryServerLockResponseBody> body{};

  QueryServerLockResponse() {}

  explicit QueryServerLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryServerLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryServerLockResponseBody>(model1);
      }
    }
  }


  virtual ~QueryServerLockResponse() = default;
};
class QueryTaskDetailHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainNameCursor{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskDetailNoCursor{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> userClientIp{};

  QueryTaskDetailHistoryRequest() {}

  explicit QueryTaskDetailHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameCursor) {
      res["DomainNameCursor"] = boost::any(*domainNameCursor);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskDetailNoCursor) {
      res["TaskDetailNoCursor"] = boost::any(*taskDetailNoCursor);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameCursor") != m.end() && !m["DomainNameCursor"].empty()) {
      domainNameCursor = make_shared<string>(boost::any_cast<string>(m["DomainNameCursor"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskDetailNoCursor") != m.end() && !m["TaskDetailNoCursor"].empty()) {
      taskDetailNoCursor = make_shared<string>(boost::any_cast<string>(m["TaskDetailNoCursor"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTaskDetailHistoryRequest() = default;
};
class QueryTaskDetailHistoryResponseBodyCurrentPageCursor : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  QueryTaskDetailHistoryResponseBodyCurrentPageCursor() {}

  explicit QueryTaskDetailHistoryResponseBodyCurrentPageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~QueryTaskDetailHistoryResponseBodyCurrentPageCursor() = default;
};
class QueryTaskDetailHistoryResponseBodyNextPageCursor : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  QueryTaskDetailHistoryResponseBodyNextPageCursor() {}

  explicit QueryTaskDetailHistoryResponseBodyNextPageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~QueryTaskDetailHistoryResponseBodyNextPageCursor() = default;
};
class QueryTaskDetailHistoryResponseBodyObjects : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  QueryTaskDetailHistoryResponseBodyObjects() {}

  explicit QueryTaskDetailHistoryResponseBodyObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~QueryTaskDetailHistoryResponseBodyObjects() = default;
};
class QueryTaskDetailHistoryResponseBodyPrePageCursor : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  QueryTaskDetailHistoryResponseBodyPrePageCursor() {}

  explicit QueryTaskDetailHistoryResponseBodyPrePageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~QueryTaskDetailHistoryResponseBodyPrePageCursor() = default;
};
class QueryTaskDetailHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryTaskDetailHistoryResponseBodyCurrentPageCursor> currentPageCursor{};
  shared_ptr<QueryTaskDetailHistoryResponseBodyNextPageCursor> nextPageCursor{};
  shared_ptr<vector<QueryTaskDetailHistoryResponseBodyObjects>> objects{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryTaskDetailHistoryResponseBodyPrePageCursor> prePageCursor{};
  shared_ptr<string> requestId{};

  QueryTaskDetailHistoryResponseBody() {}

  explicit QueryTaskDetailHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageCursor) {
      res["CurrentPageCursor"] = currentPageCursor ? boost::any(currentPageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPageCursor) {
      res["NextPageCursor"] = nextPageCursor ? boost::any(nextPageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (objects) {
      vector<boost::any> temp1;
      for(auto item1:*objects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Objects"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePageCursor) {
      res["PrePageCursor"] = prePageCursor ? boost::any(prePageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageCursor") != m.end() && !m["CurrentPageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentPageCursor"].type()) {
        QueryTaskDetailHistoryResponseBodyCurrentPageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentPageCursor"]));
        currentPageCursor = make_shared<QueryTaskDetailHistoryResponseBodyCurrentPageCursor>(model1);
      }
    }
    if (m.find("NextPageCursor") != m.end() && !m["NextPageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["NextPageCursor"].type()) {
        QueryTaskDetailHistoryResponseBodyNextPageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NextPageCursor"]));
        nextPageCursor = make_shared<QueryTaskDetailHistoryResponseBodyNextPageCursor>(model1);
      }
    }
    if (m.find("Objects") != m.end() && !m["Objects"].empty()) {
      if (typeid(vector<boost::any>) == m["Objects"].type()) {
        vector<QueryTaskDetailHistoryResponseBodyObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Objects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskDetailHistoryResponseBodyObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objects = make_shared<vector<QueryTaskDetailHistoryResponseBodyObjects>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePageCursor") != m.end() && !m["PrePageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrePageCursor"].type()) {
        QueryTaskDetailHistoryResponseBodyPrePageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrePageCursor"]));
        prePageCursor = make_shared<QueryTaskDetailHistoryResponseBodyPrePageCursor>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryTaskDetailHistoryResponseBody() = default;
};
class QueryTaskDetailHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskDetailHistoryResponseBody> body{};

  QueryTaskDetailHistoryResponse() {}

  explicit QueryTaskDetailHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskDetailHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskDetailHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskDetailHistoryResponse() = default;
};
class QueryTaskDetailListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> userClientIp{};

  QueryTaskDetailListRequest() {}

  explicit QueryTaskDetailListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTaskDetailListRequest() = default;
};
class QueryTaskDetailListResponseBodyDataTaskDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> domainName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskDetailNo{};
  shared_ptr<string> taskNo{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};
  shared_ptr<long> tryCount{};
  shared_ptr<string> updateTime{};

  QueryTaskDetailListResponseBodyDataTaskDetail() {}

  explicit QueryTaskDetailListResponseBodyDataTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskDetailNo) {
      res["TaskDetailNo"] = boost::any(*taskDetailNo);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    if (tryCount) {
      res["TryCount"] = boost::any(*tryCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskDetailNo") != m.end() && !m["TaskDetailNo"].empty()) {
      taskDetailNo = make_shared<string>(boost::any_cast<string>(m["TaskDetailNo"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
    if (m.find("TryCount") != m.end() && !m["TryCount"].empty()) {
      tryCount = make_shared<long>(boost::any_cast<long>(m["TryCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~QueryTaskDetailListResponseBodyDataTaskDetail() = default;
};
class QueryTaskDetailListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTaskDetailListResponseBodyDataTaskDetail>> taskDetail{};

  QueryTaskDetailListResponseBodyData() {}

  explicit QueryTaskDetailListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskDetail) {
      vector<boost::any> temp1;
      for(auto item1:*taskDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskDetail"].type()) {
        vector<QueryTaskDetailListResponseBodyDataTaskDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskDetailListResponseBodyDataTaskDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskDetail = make_shared<vector<QueryTaskDetailListResponseBodyDataTaskDetail>>(expect1);
      }
    }
  }


  virtual ~QueryTaskDetailListResponseBodyData() = default;
};
class QueryTaskDetailListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryTaskDetailListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryTaskDetailListResponseBody() {}

  explicit QueryTaskDetailListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTaskDetailListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTaskDetailListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryTaskDetailListResponseBody() = default;
};
class QueryTaskDetailListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskDetailListResponseBody> body{};

  QueryTaskDetailListResponse() {}

  explicit QueryTaskDetailListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskDetailListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskDetailListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskDetailListResponse() = default;
};
class QueryTaskInfoHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginCreateTime{};
  shared_ptr<long> createTimeCursor{};
  shared_ptr<long> endCreateTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskNoCursor{};
  shared_ptr<string> userClientIp{};

  QueryTaskInfoHistoryRequest() {}

  explicit QueryTaskInfoHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginCreateTime) {
      res["BeginCreateTime"] = boost::any(*beginCreateTime);
    }
    if (createTimeCursor) {
      res["CreateTimeCursor"] = boost::any(*createTimeCursor);
    }
    if (endCreateTime) {
      res["EndCreateTime"] = boost::any(*endCreateTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskNoCursor) {
      res["TaskNoCursor"] = boost::any(*taskNoCursor);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginCreateTime") != m.end() && !m["BeginCreateTime"].empty()) {
      beginCreateTime = make_shared<long>(boost::any_cast<long>(m["BeginCreateTime"]));
    }
    if (m.find("CreateTimeCursor") != m.end() && !m["CreateTimeCursor"].empty()) {
      createTimeCursor = make_shared<long>(boost::any_cast<long>(m["CreateTimeCursor"]));
    }
    if (m.find("EndCreateTime") != m.end() && !m["EndCreateTime"].empty()) {
      endCreateTime = make_shared<long>(boost::any_cast<long>(m["EndCreateTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskNoCursor") != m.end() && !m["TaskNoCursor"].empty()) {
      taskNoCursor = make_shared<string>(boost::any_cast<string>(m["TaskNoCursor"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTaskInfoHistoryRequest() = default;
};
class QueryTaskInfoHistoryResponseBodyCurrentPageCursor : public Darabonba::Model {
public:
  shared_ptr<string> clientip{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimeLong{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};

  QueryTaskInfoHistoryResponseBodyCurrentPageCursor() {}

  explicit QueryTaskInfoHistoryResponseBodyCurrentPageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientip) {
      res["Clientip"] = boost::any(*clientip);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clientip") != m.end() && !m["Clientip"].empty()) {
      clientip = make_shared<string>(boost::any_cast<string>(m["Clientip"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<long>(boost::any_cast<long>(m["CreateTimeLong"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
  }


  virtual ~QueryTaskInfoHistoryResponseBodyCurrentPageCursor() = default;
};
class QueryTaskInfoHistoryResponseBodyNextPageCursor : public Darabonba::Model {
public:
  shared_ptr<string> clientip{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimeLong{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};

  QueryTaskInfoHistoryResponseBodyNextPageCursor() {}

  explicit QueryTaskInfoHistoryResponseBodyNextPageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientip) {
      res["Clientip"] = boost::any(*clientip);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clientip") != m.end() && !m["Clientip"].empty()) {
      clientip = make_shared<string>(boost::any_cast<string>(m["Clientip"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<long>(boost::any_cast<long>(m["CreateTimeLong"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
  }


  virtual ~QueryTaskInfoHistoryResponseBodyNextPageCursor() = default;
};
class QueryTaskInfoHistoryResponseBodyObjects : public Darabonba::Model {
public:
  shared_ptr<string> clientip{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimeLong{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};

  QueryTaskInfoHistoryResponseBodyObjects() {}

  explicit QueryTaskInfoHistoryResponseBodyObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientip) {
      res["Clientip"] = boost::any(*clientip);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clientip") != m.end() && !m["Clientip"].empty()) {
      clientip = make_shared<string>(boost::any_cast<string>(m["Clientip"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<long>(boost::any_cast<long>(m["CreateTimeLong"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
  }


  virtual ~QueryTaskInfoHistoryResponseBodyObjects() = default;
};
class QueryTaskInfoHistoryResponseBodyPrePageCursor : public Darabonba::Model {
public:
  shared_ptr<string> clientip{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimeLong{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};

  QueryTaskInfoHistoryResponseBodyPrePageCursor() {}

  explicit QueryTaskInfoHistoryResponseBodyPrePageCursor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientip) {
      res["Clientip"] = boost::any(*clientip);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimeLong) {
      res["CreateTimeLong"] = boost::any(*createTimeLong);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clientip") != m.end() && !m["Clientip"].empty()) {
      clientip = make_shared<string>(boost::any_cast<string>(m["Clientip"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimeLong") != m.end() && !m["CreateTimeLong"].empty()) {
      createTimeLong = make_shared<long>(boost::any_cast<long>(m["CreateTimeLong"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
  }


  virtual ~QueryTaskInfoHistoryResponseBodyPrePageCursor() = default;
};
class QueryTaskInfoHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryTaskInfoHistoryResponseBodyCurrentPageCursor> currentPageCursor{};
  shared_ptr<QueryTaskInfoHistoryResponseBodyNextPageCursor> nextPageCursor{};
  shared_ptr<vector<QueryTaskInfoHistoryResponseBodyObjects>> objects{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryTaskInfoHistoryResponseBodyPrePageCursor> prePageCursor{};
  shared_ptr<string> requestId{};

  QueryTaskInfoHistoryResponseBody() {}

  explicit QueryTaskInfoHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageCursor) {
      res["CurrentPageCursor"] = currentPageCursor ? boost::any(currentPageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPageCursor) {
      res["NextPageCursor"] = nextPageCursor ? boost::any(nextPageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (objects) {
      vector<boost::any> temp1;
      for(auto item1:*objects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Objects"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePageCursor) {
      res["PrePageCursor"] = prePageCursor ? boost::any(prePageCursor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageCursor") != m.end() && !m["CurrentPageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentPageCursor"].type()) {
        QueryTaskInfoHistoryResponseBodyCurrentPageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentPageCursor"]));
        currentPageCursor = make_shared<QueryTaskInfoHistoryResponseBodyCurrentPageCursor>(model1);
      }
    }
    if (m.find("NextPageCursor") != m.end() && !m["NextPageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["NextPageCursor"].type()) {
        QueryTaskInfoHistoryResponseBodyNextPageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NextPageCursor"]));
        nextPageCursor = make_shared<QueryTaskInfoHistoryResponseBodyNextPageCursor>(model1);
      }
    }
    if (m.find("Objects") != m.end() && !m["Objects"].empty()) {
      if (typeid(vector<boost::any>) == m["Objects"].type()) {
        vector<QueryTaskInfoHistoryResponseBodyObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Objects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskInfoHistoryResponseBodyObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objects = make_shared<vector<QueryTaskInfoHistoryResponseBodyObjects>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePageCursor") != m.end() && !m["PrePageCursor"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrePageCursor"].type()) {
        QueryTaskInfoHistoryResponseBodyPrePageCursor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrePageCursor"]));
        prePageCursor = make_shared<QueryTaskInfoHistoryResponseBodyPrePageCursor>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryTaskInfoHistoryResponseBody() = default;
};
class QueryTaskInfoHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskInfoHistoryResponseBody> body{};

  QueryTaskInfoHistoryResponse() {}

  explicit QueryTaskInfoHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskInfoHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskInfoHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskInfoHistoryResponse() = default;
};
class QueryTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginCreateTime{};
  shared_ptr<long> endCreateTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userClientIp{};

  QueryTaskListRequest() {}

  explicit QueryTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginCreateTime) {
      res["BeginCreateTime"] = boost::any(*beginCreateTime);
    }
    if (endCreateTime) {
      res["EndCreateTime"] = boost::any(*endCreateTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginCreateTime") != m.end() && !m["BeginCreateTime"].empty()) {
      beginCreateTime = make_shared<long>(boost::any_cast<long>(m["BeginCreateTime"]));
    }
    if (m.find("EndCreateTime") != m.end() && !m["EndCreateTime"].empty()) {
      endCreateTime = make_shared<long>(boost::any_cast<long>(m["EndCreateTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTaskListRequest() = default;
};
class QueryTaskListResponseBodyDataTaskInfo : public Darabonba::Model {
public:
  shared_ptr<string> clientip{};
  shared_ptr<string> createTime{};
  shared_ptr<string> taskCancelStatus{};
  shared_ptr<long> taskCancelStatusCode{};
  shared_ptr<string> taskNo{};
  shared_ptr<long> taskNum{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> taskStatusCode{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeDescription{};

  QueryTaskListResponseBodyDataTaskInfo() {}

  explicit QueryTaskListResponseBodyDataTaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientip) {
      res["Clientip"] = boost::any(*clientip);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (taskCancelStatus) {
      res["TaskCancelStatus"] = boost::any(*taskCancelStatus);
    }
    if (taskCancelStatusCode) {
      res["TaskCancelStatusCode"] = boost::any(*taskCancelStatusCode);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    if (taskNum) {
      res["TaskNum"] = boost::any(*taskNum);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusCode) {
      res["TaskStatusCode"] = boost::any(*taskStatusCode);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeDescription) {
      res["TaskTypeDescription"] = boost::any(*taskTypeDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clientip") != m.end() && !m["Clientip"].empty()) {
      clientip = make_shared<string>(boost::any_cast<string>(m["Clientip"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TaskCancelStatus") != m.end() && !m["TaskCancelStatus"].empty()) {
      taskCancelStatus = make_shared<string>(boost::any_cast<string>(m["TaskCancelStatus"]));
    }
    if (m.find("TaskCancelStatusCode") != m.end() && !m["TaskCancelStatusCode"].empty()) {
      taskCancelStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskCancelStatusCode"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
    if (m.find("TaskNum") != m.end() && !m["TaskNum"].empty()) {
      taskNum = make_shared<long>(boost::any_cast<long>(m["TaskNum"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusCode") != m.end() && !m["TaskStatusCode"].empty()) {
      taskStatusCode = make_shared<long>(boost::any_cast<long>(m["TaskStatusCode"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeDescription") != m.end() && !m["TaskTypeDescription"].empty()) {
      taskTypeDescription = make_shared<string>(boost::any_cast<string>(m["TaskTypeDescription"]));
    }
  }


  virtual ~QueryTaskListResponseBodyDataTaskInfo() = default;
};
class QueryTaskListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTaskListResponseBodyDataTaskInfo>> taskInfo{};

  QueryTaskListResponseBodyData() {}

  explicit QueryTaskListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskInfo) {
      vector<boost::any> temp1;
      for(auto item1:*taskInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskInfo") != m.end() && !m["TaskInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskInfo"].type()) {
        vector<QueryTaskListResponseBodyDataTaskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskListResponseBodyDataTaskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskInfo = make_shared<vector<QueryTaskListResponseBodyDataTaskInfo>>(expect1);
      }
    }
  }


  virtual ~QueryTaskListResponseBodyData() = default;
};
class QueryTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryTaskListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryTaskListResponseBody() {}

  explicit QueryTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTaskListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTaskListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryTaskListResponseBody() = default;
};
class QueryTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskListResponseBody> body{};

  QueryTaskListResponse() {}

  explicit QueryTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskListResponse() = default;
};
class QueryTransferInByInstanceIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryTransferInByInstanceIdRequest() {}

  explicit QueryTransferInByInstanceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTransferInByInstanceIdRequest() = default;
};
class QueryTransferInByInstanceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modificationDate{};
  shared_ptr<long> modificationDateLong{};
  shared_ptr<bool> needMailCheck{};
  shared_ptr<long> progressBarType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultDate{};
  shared_ptr<long> resultDateLong{};
  shared_ptr<string> resultMsg{};
  shared_ptr<string> simpleTransferInStatus{};
  shared_ptr<long> status{};
  shared_ptr<string> submissionDate{};
  shared_ptr<long> submissionDateLong{};
  shared_ptr<string> transferAuthorizationCodeSubmissionDate{};
  shared_ptr<long> transferAuthorizationCodeSubmissionDateLong{};
  shared_ptr<string> userId{};
  shared_ptr<bool> whoisMailStatus{};

  QueryTransferInByInstanceIdResponseBody() {}

  explicit QueryTransferInByInstanceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modificationDate) {
      res["ModificationDate"] = boost::any(*modificationDate);
    }
    if (modificationDateLong) {
      res["ModificationDateLong"] = boost::any(*modificationDateLong);
    }
    if (needMailCheck) {
      res["NeedMailCheck"] = boost::any(*needMailCheck);
    }
    if (progressBarType) {
      res["ProgressBarType"] = boost::any(*progressBarType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultDate) {
      res["ResultDate"] = boost::any(*resultDate);
    }
    if (resultDateLong) {
      res["ResultDateLong"] = boost::any(*resultDateLong);
    }
    if (resultMsg) {
      res["ResultMsg"] = boost::any(*resultMsg);
    }
    if (simpleTransferInStatus) {
      res["SimpleTransferInStatus"] = boost::any(*simpleTransferInStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionDate) {
      res["SubmissionDate"] = boost::any(*submissionDate);
    }
    if (submissionDateLong) {
      res["SubmissionDateLong"] = boost::any(*submissionDateLong);
    }
    if (transferAuthorizationCodeSubmissionDate) {
      res["TransferAuthorizationCodeSubmissionDate"] = boost::any(*transferAuthorizationCodeSubmissionDate);
    }
    if (transferAuthorizationCodeSubmissionDateLong) {
      res["TransferAuthorizationCodeSubmissionDateLong"] = boost::any(*transferAuthorizationCodeSubmissionDateLong);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (whoisMailStatus) {
      res["WhoisMailStatus"] = boost::any(*whoisMailStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModificationDate") != m.end() && !m["ModificationDate"].empty()) {
      modificationDate = make_shared<string>(boost::any_cast<string>(m["ModificationDate"]));
    }
    if (m.find("ModificationDateLong") != m.end() && !m["ModificationDateLong"].empty()) {
      modificationDateLong = make_shared<long>(boost::any_cast<long>(m["ModificationDateLong"]));
    }
    if (m.find("NeedMailCheck") != m.end() && !m["NeedMailCheck"].empty()) {
      needMailCheck = make_shared<bool>(boost::any_cast<bool>(m["NeedMailCheck"]));
    }
    if (m.find("ProgressBarType") != m.end() && !m["ProgressBarType"].empty()) {
      progressBarType = make_shared<long>(boost::any_cast<long>(m["ProgressBarType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultDate") != m.end() && !m["ResultDate"].empty()) {
      resultDate = make_shared<string>(boost::any_cast<string>(m["ResultDate"]));
    }
    if (m.find("ResultDateLong") != m.end() && !m["ResultDateLong"].empty()) {
      resultDateLong = make_shared<long>(boost::any_cast<long>(m["ResultDateLong"]));
    }
    if (m.find("ResultMsg") != m.end() && !m["ResultMsg"].empty()) {
      resultMsg = make_shared<string>(boost::any_cast<string>(m["ResultMsg"]));
    }
    if (m.find("SimpleTransferInStatus") != m.end() && !m["SimpleTransferInStatus"].empty()) {
      simpleTransferInStatus = make_shared<string>(boost::any_cast<string>(m["SimpleTransferInStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubmissionDate") != m.end() && !m["SubmissionDate"].empty()) {
      submissionDate = make_shared<string>(boost::any_cast<string>(m["SubmissionDate"]));
    }
    if (m.find("SubmissionDateLong") != m.end() && !m["SubmissionDateLong"].empty()) {
      submissionDateLong = make_shared<long>(boost::any_cast<long>(m["SubmissionDateLong"]));
    }
    if (m.find("TransferAuthorizationCodeSubmissionDate") != m.end() && !m["TransferAuthorizationCodeSubmissionDate"].empty()) {
      transferAuthorizationCodeSubmissionDate = make_shared<string>(boost::any_cast<string>(m["TransferAuthorizationCodeSubmissionDate"]));
    }
    if (m.find("TransferAuthorizationCodeSubmissionDateLong") != m.end() && !m["TransferAuthorizationCodeSubmissionDateLong"].empty()) {
      transferAuthorizationCodeSubmissionDateLong = make_shared<long>(boost::any_cast<long>(m["TransferAuthorizationCodeSubmissionDateLong"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WhoisMailStatus") != m.end() && !m["WhoisMailStatus"].empty()) {
      whoisMailStatus = make_shared<bool>(boost::any_cast<bool>(m["WhoisMailStatus"]));
    }
  }


  virtual ~QueryTransferInByInstanceIdResponseBody() = default;
};
class QueryTransferInByInstanceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferInByInstanceIdResponseBody> body{};

  QueryTransferInByInstanceIdResponse() {}

  explicit QueryTransferInByInstanceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferInByInstanceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferInByInstanceIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferInByInstanceIdResponse() = default;
};
class QueryTransferInListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> simpleTransferInStatus{};
  shared_ptr<long> submissionEndDate{};
  shared_ptr<long> submissionStartDate{};
  shared_ptr<string> userClientIp{};

  QueryTransferInListRequest() {}

  explicit QueryTransferInListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (simpleTransferInStatus) {
      res["SimpleTransferInStatus"] = boost::any(*simpleTransferInStatus);
    }
    if (submissionEndDate) {
      res["SubmissionEndDate"] = boost::any(*submissionEndDate);
    }
    if (submissionStartDate) {
      res["SubmissionStartDate"] = boost::any(*submissionStartDate);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SimpleTransferInStatus") != m.end() && !m["SimpleTransferInStatus"].empty()) {
      simpleTransferInStatus = make_shared<string>(boost::any_cast<string>(m["SimpleTransferInStatus"]));
    }
    if (m.find("SubmissionEndDate") != m.end() && !m["SubmissionEndDate"].empty()) {
      submissionEndDate = make_shared<long>(boost::any_cast<long>(m["SubmissionEndDate"]));
    }
    if (m.find("SubmissionStartDate") != m.end() && !m["SubmissionStartDate"].empty()) {
      submissionStartDate = make_shared<long>(boost::any_cast<long>(m["SubmissionStartDate"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTransferInListRequest() = default;
};
class QueryTransferInListResponseBodyDataTransferInInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modificationDate{};
  shared_ptr<long> modificationDateLong{};
  shared_ptr<bool> needMailCheck{};
  shared_ptr<long> progressBarType{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultDate{};
  shared_ptr<long> resultDateLong{};
  shared_ptr<string> resultMsg{};
  shared_ptr<string> simpleTransferInStatus{};
  shared_ptr<long> status{};
  shared_ptr<string> submissionDate{};
  shared_ptr<long> submissionDateLong{};
  shared_ptr<string> transferAuthorizationCodeSubmissionDate{};
  shared_ptr<long> transferAuthorizationCodeSubmissionDateLong{};
  shared_ptr<string> userId{};
  shared_ptr<bool> whoisMailStatus{};

  QueryTransferInListResponseBodyDataTransferInInfo() {}

  explicit QueryTransferInListResponseBodyDataTransferInInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modificationDate) {
      res["ModificationDate"] = boost::any(*modificationDate);
    }
    if (modificationDateLong) {
      res["ModificationDateLong"] = boost::any(*modificationDateLong);
    }
    if (needMailCheck) {
      res["NeedMailCheck"] = boost::any(*needMailCheck);
    }
    if (progressBarType) {
      res["ProgressBarType"] = boost::any(*progressBarType);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultDate) {
      res["ResultDate"] = boost::any(*resultDate);
    }
    if (resultDateLong) {
      res["ResultDateLong"] = boost::any(*resultDateLong);
    }
    if (resultMsg) {
      res["ResultMsg"] = boost::any(*resultMsg);
    }
    if (simpleTransferInStatus) {
      res["SimpleTransferInStatus"] = boost::any(*simpleTransferInStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionDate) {
      res["SubmissionDate"] = boost::any(*submissionDate);
    }
    if (submissionDateLong) {
      res["SubmissionDateLong"] = boost::any(*submissionDateLong);
    }
    if (transferAuthorizationCodeSubmissionDate) {
      res["TransferAuthorizationCodeSubmissionDate"] = boost::any(*transferAuthorizationCodeSubmissionDate);
    }
    if (transferAuthorizationCodeSubmissionDateLong) {
      res["TransferAuthorizationCodeSubmissionDateLong"] = boost::any(*transferAuthorizationCodeSubmissionDateLong);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (whoisMailStatus) {
      res["WhoisMailStatus"] = boost::any(*whoisMailStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModificationDate") != m.end() && !m["ModificationDate"].empty()) {
      modificationDate = make_shared<string>(boost::any_cast<string>(m["ModificationDate"]));
    }
    if (m.find("ModificationDateLong") != m.end() && !m["ModificationDateLong"].empty()) {
      modificationDateLong = make_shared<long>(boost::any_cast<long>(m["ModificationDateLong"]));
    }
    if (m.find("NeedMailCheck") != m.end() && !m["NeedMailCheck"].empty()) {
      needMailCheck = make_shared<bool>(boost::any_cast<bool>(m["NeedMailCheck"]));
    }
    if (m.find("ProgressBarType") != m.end() && !m["ProgressBarType"].empty()) {
      progressBarType = make_shared<long>(boost::any_cast<long>(m["ProgressBarType"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultDate") != m.end() && !m["ResultDate"].empty()) {
      resultDate = make_shared<string>(boost::any_cast<string>(m["ResultDate"]));
    }
    if (m.find("ResultDateLong") != m.end() && !m["ResultDateLong"].empty()) {
      resultDateLong = make_shared<long>(boost::any_cast<long>(m["ResultDateLong"]));
    }
    if (m.find("ResultMsg") != m.end() && !m["ResultMsg"].empty()) {
      resultMsg = make_shared<string>(boost::any_cast<string>(m["ResultMsg"]));
    }
    if (m.find("SimpleTransferInStatus") != m.end() && !m["SimpleTransferInStatus"].empty()) {
      simpleTransferInStatus = make_shared<string>(boost::any_cast<string>(m["SimpleTransferInStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubmissionDate") != m.end() && !m["SubmissionDate"].empty()) {
      submissionDate = make_shared<string>(boost::any_cast<string>(m["SubmissionDate"]));
    }
    if (m.find("SubmissionDateLong") != m.end() && !m["SubmissionDateLong"].empty()) {
      submissionDateLong = make_shared<long>(boost::any_cast<long>(m["SubmissionDateLong"]));
    }
    if (m.find("TransferAuthorizationCodeSubmissionDate") != m.end() && !m["TransferAuthorizationCodeSubmissionDate"].empty()) {
      transferAuthorizationCodeSubmissionDate = make_shared<string>(boost::any_cast<string>(m["TransferAuthorizationCodeSubmissionDate"]));
    }
    if (m.find("TransferAuthorizationCodeSubmissionDateLong") != m.end() && !m["TransferAuthorizationCodeSubmissionDateLong"].empty()) {
      transferAuthorizationCodeSubmissionDateLong = make_shared<long>(boost::any_cast<long>(m["TransferAuthorizationCodeSubmissionDateLong"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WhoisMailStatus") != m.end() && !m["WhoisMailStatus"].empty()) {
      whoisMailStatus = make_shared<bool>(boost::any_cast<bool>(m["WhoisMailStatus"]));
    }
  }


  virtual ~QueryTransferInListResponseBodyDataTransferInInfo() = default;
};
class QueryTransferInListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTransferInListResponseBodyDataTransferInInfo>> transferInInfo{};

  QueryTransferInListResponseBodyData() {}

  explicit QueryTransferInListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transferInInfo) {
      vector<boost::any> temp1;
      for(auto item1:*transferInInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransferInInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransferInInfo") != m.end() && !m["TransferInInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TransferInInfo"].type()) {
        vector<QueryTransferInListResponseBodyDataTransferInInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransferInInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTransferInListResponseBodyDataTransferInInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transferInInfo = make_shared<vector<QueryTransferInListResponseBodyDataTransferInInfo>>(expect1);
      }
    }
  }


  virtual ~QueryTransferInListResponseBodyData() = default;
};
class QueryTransferInListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<QueryTransferInListResponseBodyData> data{};
  shared_ptr<bool> nextPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> prePage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  QueryTransferInListResponseBody() {}

  explicit QueryTransferInListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextPage) {
      res["NextPage"] = boost::any(*nextPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prePage) {
      res["PrePage"] = boost::any(*prePage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTransferInListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTransferInListResponseBodyData>(model1);
      }
    }
    if (m.find("NextPage") != m.end() && !m["NextPage"].empty()) {
      nextPage = make_shared<bool>(boost::any_cast<bool>(m["NextPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrePage") != m.end() && !m["PrePage"].empty()) {
      prePage = make_shared<bool>(boost::any_cast<bool>(m["PrePage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~QueryTransferInListResponseBody() = default;
};
class QueryTransferInListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferInListResponseBody> body{};

  QueryTransferInListResponse() {}

  explicit QueryTransferInListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferInListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferInListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferInListResponse() = default;
};
class QueryTransferOutInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  QueryTransferOutInfoRequest() {}

  explicit QueryTransferOutInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~QueryTransferOutInfoRequest() = default;
};
class QueryTransferOutInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> expirationDate{};
  shared_ptr<string> pendingRequestDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMsg{};
  shared_ptr<long> status{};
  shared_ptr<string> transferAuthorizationCodeSendDate{};

  QueryTransferOutInfoResponseBody() {}

  explicit QueryTransferOutInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (pendingRequestDate) {
      res["PendingRequestDate"] = boost::any(*pendingRequestDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMsg) {
      res["ResultMsg"] = boost::any(*resultMsg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transferAuthorizationCodeSendDate) {
      res["TransferAuthorizationCodeSendDate"] = boost::any(*transferAuthorizationCodeSendDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("PendingRequestDate") != m.end() && !m["PendingRequestDate"].empty()) {
      pendingRequestDate = make_shared<string>(boost::any_cast<string>(m["PendingRequestDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMsg") != m.end() && !m["ResultMsg"].empty()) {
      resultMsg = make_shared<string>(boost::any_cast<string>(m["ResultMsg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TransferAuthorizationCodeSendDate") != m.end() && !m["TransferAuthorizationCodeSendDate"].empty()) {
      transferAuthorizationCodeSendDate = make_shared<string>(boost::any_cast<string>(m["TransferAuthorizationCodeSendDate"]));
    }
  }


  virtual ~QueryTransferOutInfoResponseBody() = default;
};
class QueryTransferOutInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferOutInfoResponseBody> body{};

  QueryTransferOutInfoResponse() {}

  explicit QueryTransferOutInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferOutInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferOutInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferOutInfoResponse() = default;
};
class RegistrantProfileRealNameVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileID{};
  shared_ptr<string> userClientIp{};

  RegistrantProfileRealNameVerificationRequest() {}

  explicit RegistrantProfileRealNameVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileID) {
      res["RegistrantProfileID"] = boost::any(*registrantProfileID);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileID") != m.end() && !m["RegistrantProfileID"].empty()) {
      registrantProfileID = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileID"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~RegistrantProfileRealNameVerificationRequest() = default;
};
class RegistrantProfileRealNameVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegistrantProfileRealNameVerificationResponseBody() {}

  explicit RegistrantProfileRealNameVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegistrantProfileRealNameVerificationResponseBody() = default;
};
class RegistrantProfileRealNameVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegistrantProfileRealNameVerificationResponseBody> body{};

  RegistrantProfileRealNameVerificationResponse() {}

  explicit RegistrantProfileRealNameVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RegistrantProfileRealNameVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegistrantProfileRealNameVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~RegistrantProfileRealNameVerificationResponse() = default;
};
class ResendEmailVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  ResendEmailVerificationRequest() {}

  explicit ResendEmailVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~ResendEmailVerificationRequest() = default;
};
class ResendEmailVerificationResponseBodyFailList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  ResendEmailVerificationResponseBodyFailList() {}

  explicit ResendEmailVerificationResponseBodyFailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ResendEmailVerificationResponseBodyFailList() = default;
};
class ResendEmailVerificationResponseBodySuccessList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  ResendEmailVerificationResponseBodySuccessList() {}

  explicit ResendEmailVerificationResponseBodySuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ResendEmailVerificationResponseBodySuccessList() = default;
};
class ResendEmailVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ResendEmailVerificationResponseBodyFailList>> failList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ResendEmailVerificationResponseBodySuccessList>> successList{};

  ResendEmailVerificationResponseBody() {}

  explicit ResendEmailVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failList) {
      vector<boost::any> temp1;
      for(auto item1:*failList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successList) {
      vector<boost::any> temp1;
      for(auto item1:*successList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuccessList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailList") != m.end() && !m["FailList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailList"].type()) {
        vector<ResendEmailVerificationResponseBodyFailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResendEmailVerificationResponseBodyFailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failList = make_shared<vector<ResendEmailVerificationResponseBodyFailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(vector<boost::any>) == m["SuccessList"].type()) {
        vector<ResendEmailVerificationResponseBodySuccessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuccessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResendEmailVerificationResponseBodySuccessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successList = make_shared<vector<ResendEmailVerificationResponseBodySuccessList>>(expect1);
      }
    }
  }


  virtual ~ResendEmailVerificationResponseBody() = default;
};
class ResendEmailVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResendEmailVerificationResponseBody> body{};

  ResendEmailVerificationResponse() {}

  explicit ResendEmailVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResendEmailVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendEmailVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ResendEmailVerificationResponse() = default;
};
class ResetQualificationVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  ResetQualificationVerificationRequest() {}

  explicit ResetQualificationVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~ResetQualificationVerificationRequest() = default;
};
class ResetQualificationVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetQualificationVerificationResponseBody() {}

  explicit ResetQualificationVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetQualificationVerificationResponseBody() = default;
};
class ResetQualificationVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetQualificationVerificationResponseBody> body{};

  ResetQualificationVerificationResponse() {}

  explicit ResetQualificationVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetQualificationVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetQualificationVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ResetQualificationVerificationResponse() = default;
};
class SaveBatchDomainRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> lang{};
  shared_ptr<string> remark{};
  shared_ptr<string> userClientIp{};

  SaveBatchDomainRemarkRequest() {}

  explicit SaveBatchDomainRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchDomainRemarkRequest() = default;
};
class SaveBatchDomainRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveBatchDomainRemarkResponseBody() {}

  explicit SaveBatchDomainRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SaveBatchDomainRemarkResponseBody() = default;
};
class SaveBatchDomainRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchDomainRemarkResponseBody> body{};

  SaveBatchDomainRemarkResponse() {}

  explicit SaveBatchDomainRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchDomainRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchDomainRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchDomainRemarkResponse() = default;
};
class SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<bool> aliyunDns{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> dns1{};
  shared_ptr<string> dns2{};
  shared_ptr<string> domainName{};
  shared_ptr<string> email{};
  shared_ptr<bool> enableDomainProxy{};
  shared_ptr<bool> permitPremiumActivation{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantType{};
  shared_ptr<long> subscriptionDuration{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<bool> trademarkDomainActivation{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam() {}

  explicit SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (aliyunDns) {
      res["AliyunDns"] = boost::any(*aliyunDns);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (dns1) {
      res["Dns1"] = boost::any(*dns1);
    }
    if (dns2) {
      res["Dns2"] = boost::any(*dns2);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (enableDomainProxy) {
      res["EnableDomainProxy"] = boost::any(*enableDomainProxy);
    }
    if (permitPremiumActivation) {
      res["PermitPremiumActivation"] = boost::any(*permitPremiumActivation);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (subscriptionDuration) {
      res["SubscriptionDuration"] = boost::any(*subscriptionDuration);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (trademarkDomainActivation) {
      res["TrademarkDomainActivation"] = boost::any(*trademarkDomainActivation);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AliyunDns") != m.end() && !m["AliyunDns"].empty()) {
      aliyunDns = make_shared<bool>(boost::any_cast<bool>(m["AliyunDns"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Dns1") != m.end() && !m["Dns1"].empty()) {
      dns1 = make_shared<string>(boost::any_cast<string>(m["Dns1"]));
    }
    if (m.find("Dns2") != m.end() && !m["Dns2"].empty()) {
      dns2 = make_shared<string>(boost::any_cast<string>(m["Dns2"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EnableDomainProxy") != m.end() && !m["EnableDomainProxy"].empty()) {
      enableDomainProxy = make_shared<bool>(boost::any_cast<bool>(m["EnableDomainProxy"]));
    }
    if (m.find("PermitPremiumActivation") != m.end() && !m["PermitPremiumActivation"].empty()) {
      permitPremiumActivation = make_shared<bool>(boost::any_cast<bool>(m["PermitPremiumActivation"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("SubscriptionDuration") != m.end() && !m["SubscriptionDuration"].empty()) {
      subscriptionDuration = make_shared<long>(boost::any_cast<long>(m["SubscriptionDuration"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("TrademarkDomainActivation") != m.end() && !m["TrademarkDomainActivation"].empty()) {
      trademarkDomainActivation = make_shared<bool>(boost::any_cast<bool>(m["TrademarkDomainActivation"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam() = default;
};
class SaveBatchTaskForCreatingOrderActivateRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> lang{};
  shared_ptr<vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>> orderActivateParam{};
  shared_ptr<string> promotionNo{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForCreatingOrderActivateRequest() {}

  explicit SaveBatchTaskForCreatingOrderActivateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderActivateParam) {
      vector<boost::any> temp1;
      for(auto item1:*orderActivateParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderActivateParam"] = boost::any(temp1);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderActivateParam") != m.end() && !m["OrderActivateParam"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderActivateParam"].type()) {
        vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderActivateParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderActivateParam = make_shared<vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>>(expect1);
      }
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderActivateRequest() = default;
};
class SaveBatchTaskForCreatingOrderActivateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForCreatingOrderActivateResponseBody() {}

  explicit SaveBatchTaskForCreatingOrderActivateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderActivateResponseBody() = default;
};
class SaveBatchTaskForCreatingOrderActivateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForCreatingOrderActivateResponseBody> body{};

  SaveBatchTaskForCreatingOrderActivateResponse() {}

  explicit SaveBatchTaskForCreatingOrderActivateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForCreatingOrderActivateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForCreatingOrderActivateResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderActivateResponse() = default;
};
class SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam : public Darabonba::Model {
public:
  shared_ptr<long> currentExpirationDate{};
  shared_ptr<string> domainName{};

  SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam() {}

  explicit SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentExpirationDate) {
      res["CurrentExpirationDate"] = boost::any(*currentExpirationDate);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentExpirationDate") != m.end() && !m["CurrentExpirationDate"].empty()) {
      currentExpirationDate = make_shared<long>(boost::any_cast<long>(m["CurrentExpirationDate"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam() = default;
};
class SaveBatchTaskForCreatingOrderRedeemRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> lang{};
  shared_ptr<vector<SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam>> orderRedeemParam{};
  shared_ptr<string> promotionNo{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForCreatingOrderRedeemRequest() {}

  explicit SaveBatchTaskForCreatingOrderRedeemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderRedeemParam) {
      vector<boost::any> temp1;
      for(auto item1:*orderRedeemParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderRedeemParam"] = boost::any(temp1);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderRedeemParam") != m.end() && !m["OrderRedeemParam"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderRedeemParam"].type()) {
        vector<SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderRedeemParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderRedeemParam = make_shared<vector<SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam>>(expect1);
      }
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRedeemRequest() = default;
};
class SaveBatchTaskForCreatingOrderRedeemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForCreatingOrderRedeemResponseBody() {}

  explicit SaveBatchTaskForCreatingOrderRedeemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRedeemResponseBody() = default;
};
class SaveBatchTaskForCreatingOrderRedeemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForCreatingOrderRedeemResponseBody> body{};

  SaveBatchTaskForCreatingOrderRedeemResponse() {}

  explicit SaveBatchTaskForCreatingOrderRedeemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForCreatingOrderRedeemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForCreatingOrderRedeemResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRedeemResponse() = default;
};
class SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam : public Darabonba::Model {
public:
  shared_ptr<long> currentExpirationDate{};
  shared_ptr<string> domainName{};
  shared_ptr<long> subscriptionDuration{};

  SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam() {}

  explicit SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentExpirationDate) {
      res["CurrentExpirationDate"] = boost::any(*currentExpirationDate);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (subscriptionDuration) {
      res["SubscriptionDuration"] = boost::any(*subscriptionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentExpirationDate") != m.end() && !m["CurrentExpirationDate"].empty()) {
      currentExpirationDate = make_shared<long>(boost::any_cast<long>(m["CurrentExpirationDate"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("SubscriptionDuration") != m.end() && !m["SubscriptionDuration"].empty()) {
      subscriptionDuration = make_shared<long>(boost::any_cast<long>(m["SubscriptionDuration"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam() = default;
};
class SaveBatchTaskForCreatingOrderRenewRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> lang{};
  shared_ptr<vector<SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam>> orderRenewParam{};
  shared_ptr<string> promotionNo{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForCreatingOrderRenewRequest() {}

  explicit SaveBatchTaskForCreatingOrderRenewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderRenewParam) {
      vector<boost::any> temp1;
      for(auto item1:*orderRenewParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderRenewParam"] = boost::any(temp1);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderRenewParam") != m.end() && !m["OrderRenewParam"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderRenewParam"].type()) {
        vector<SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderRenewParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderRenewParam = make_shared<vector<SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam>>(expect1);
      }
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRenewRequest() = default;
};
class SaveBatchTaskForCreatingOrderRenewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForCreatingOrderRenewResponseBody() {}

  explicit SaveBatchTaskForCreatingOrderRenewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRenewResponseBody() = default;
};
class SaveBatchTaskForCreatingOrderRenewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForCreatingOrderRenewResponseBody> body{};

  SaveBatchTaskForCreatingOrderRenewResponse() {}

  explicit SaveBatchTaskForCreatingOrderRenewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForCreatingOrderRenewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForCreatingOrderRenewResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderRenewResponse() = default;
};
class SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam : public Darabonba::Model {
public:
  shared_ptr<string> authorizationCode{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> permitPremiumTransfer{};
  shared_ptr<long> registrantProfileId{};

  SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam() {}

  explicit SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationCode) {
      res["AuthorizationCode"] = boost::any(*authorizationCode);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (permitPremiumTransfer) {
      res["PermitPremiumTransfer"] = boost::any(*permitPremiumTransfer);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationCode") != m.end() && !m["AuthorizationCode"].empty()) {
      authorizationCode = make_shared<string>(boost::any_cast<string>(m["AuthorizationCode"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("PermitPremiumTransfer") != m.end() && !m["PermitPremiumTransfer"].empty()) {
      permitPremiumTransfer = make_shared<bool>(boost::any_cast<bool>(m["PermitPremiumTransfer"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam() = default;
};
class SaveBatchTaskForCreatingOrderTransferRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> lang{};
  shared_ptr<vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>> orderTransferParam{};
  shared_ptr<string> promotionNo{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForCreatingOrderTransferRequest() {}

  explicit SaveBatchTaskForCreatingOrderTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderTransferParam) {
      vector<boost::any> temp1;
      for(auto item1:*orderTransferParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderTransferParam"] = boost::any(temp1);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderTransferParam") != m.end() && !m["OrderTransferParam"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderTransferParam"].type()) {
        vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderTransferParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderTransferParam = make_shared<vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>>(expect1);
      }
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderTransferRequest() = default;
};
class SaveBatchTaskForCreatingOrderTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForCreatingOrderTransferResponseBody() {}

  explicit SaveBatchTaskForCreatingOrderTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderTransferResponseBody() = default;
};
class SaveBatchTaskForCreatingOrderTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForCreatingOrderTransferResponseBody> body{};

  SaveBatchTaskForCreatingOrderTransferResponse() {}

  explicit SaveBatchTaskForCreatingOrderTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForCreatingOrderTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForCreatingOrderTransferResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForCreatingOrderTransferResponse() = default;
};
class SaveBatchTaskForDomainNameProxyServiceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForDomainNameProxyServiceRequest() {}

  explicit SaveBatchTaskForDomainNameProxyServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForDomainNameProxyServiceRequest() = default;
};
class SaveBatchTaskForDomainNameProxyServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForDomainNameProxyServiceResponseBody() {}

  explicit SaveBatchTaskForDomainNameProxyServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForDomainNameProxyServiceResponseBody() = default;
};
class SaveBatchTaskForDomainNameProxyServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForDomainNameProxyServiceResponseBody> body{};

  SaveBatchTaskForDomainNameProxyServiceResponse() {}

  explicit SaveBatchTaskForDomainNameProxyServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForDomainNameProxyServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForDomainNameProxyServiceResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForDomainNameProxyServiceResponse() = default;
};
class SaveBatchTaskForModifyingDomainDnsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> aliyunDns{};
  shared_ptr<vector<string>> domainName{};
  shared_ptr<vector<string>> domainNameServer{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForModifyingDomainDnsRequest() {}

  explicit SaveBatchTaskForModifyingDomainDnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunDns) {
      res["AliyunDns"] = boost::any(*aliyunDns);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameServer) {
      res["DomainNameServer"] = boost::any(*domainNameServer);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunDns") != m.end() && !m["AliyunDns"].empty()) {
      aliyunDns = make_shared<bool>(boost::any_cast<bool>(m["AliyunDns"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DomainNameServer") != m.end() && !m["DomainNameServer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainNameServer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainNameServer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainNameServer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForModifyingDomainDnsRequest() = default;
};
class SaveBatchTaskForModifyingDomainDnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForModifyingDomainDnsResponseBody() {}

  explicit SaveBatchTaskForModifyingDomainDnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForModifyingDomainDnsResponseBody() = default;
};
class SaveBatchTaskForModifyingDomainDnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForModifyingDomainDnsResponseBody> body{};

  SaveBatchTaskForModifyingDomainDnsResponse() {}

  explicit SaveBatchTaskForModifyingDomainDnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForModifyingDomainDnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForModifyingDomainDnsResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForModifyingDomainDnsResponse() = default;
};
class SaveBatchTaskForReserveDropListDomainRequestDomains : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  SaveBatchTaskForReserveDropListDomainRequestDomains() {}

  explicit SaveBatchTaskForReserveDropListDomainRequestDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~SaveBatchTaskForReserveDropListDomainRequestDomains() = default;
};
class SaveBatchTaskForReserveDropListDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactTemplateId{};
  shared_ptr<vector<SaveBatchTaskForReserveDropListDomainRequestDomains>> domains{};

  SaveBatchTaskForReserveDropListDomainRequest() {}

  explicit SaveBatchTaskForReserveDropListDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactTemplateId) {
      res["ContactTemplateId"] = boost::any(*contactTemplateId);
    }
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactTemplateId") != m.end() && !m["ContactTemplateId"].empty()) {
      contactTemplateId = make_shared<string>(boost::any_cast<string>(m["ContactTemplateId"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<SaveBatchTaskForReserveDropListDomainRequestDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveBatchTaskForReserveDropListDomainRequestDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<SaveBatchTaskForReserveDropListDomainRequestDomains>>(expect1);
      }
    }
  }


  virtual ~SaveBatchTaskForReserveDropListDomainRequest() = default;
};
class SaveBatchTaskForReserveDropListDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForReserveDropListDomainResponseBody() {}

  explicit SaveBatchTaskForReserveDropListDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForReserveDropListDomainResponseBody() = default;
};
class SaveBatchTaskForReserveDropListDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForReserveDropListDomainResponseBody> body{};

  SaveBatchTaskForReserveDropListDomainResponse() {}

  explicit SaveBatchTaskForReserveDropListDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForReserveDropListDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForReserveDropListDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForReserveDropListDomainResponse() = default;
};
class SaveBatchTaskForTransferProhibitionLockRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForTransferProhibitionLockRequest() {}

  explicit SaveBatchTaskForTransferProhibitionLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForTransferProhibitionLockRequest() = default;
};
class SaveBatchTaskForTransferProhibitionLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForTransferProhibitionLockResponseBody() {}

  explicit SaveBatchTaskForTransferProhibitionLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForTransferProhibitionLockResponseBody() = default;
};
class SaveBatchTaskForTransferProhibitionLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForTransferProhibitionLockResponseBody> body{};

  SaveBatchTaskForTransferProhibitionLockResponse() {}

  explicit SaveBatchTaskForTransferProhibitionLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForTransferProhibitionLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForTransferProhibitionLockResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForTransferProhibitionLockResponse() = default;
};
class SaveBatchTaskForUpdateProhibitionLockRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForUpdateProhibitionLockRequest() {}

  explicit SaveBatchTaskForUpdateProhibitionLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForUpdateProhibitionLockRequest() = default;
};
class SaveBatchTaskForUpdateProhibitionLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForUpdateProhibitionLockResponseBody() {}

  explicit SaveBatchTaskForUpdateProhibitionLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForUpdateProhibitionLockResponseBody() = default;
};
class SaveBatchTaskForUpdateProhibitionLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForUpdateProhibitionLockResponseBody> body{};

  SaveBatchTaskForUpdateProhibitionLockResponse() {}

  explicit SaveBatchTaskForUpdateProhibitionLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForUpdateProhibitionLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForUpdateProhibitionLockResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForUpdateProhibitionLockResponse() = default;
};
class SaveBatchTaskForUpdatingContactInfoByNewContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> contactType{};
  shared_ptr<string> country{};
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<bool> transferOutProhibited{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveBatchTaskForUpdatingContactInfoByNewContactRequest() {}

  explicit SaveBatchTaskForUpdatingContactInfoByNewContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (transferOutProhibited) {
      res["TransferOutProhibited"] = boost::any(*transferOutProhibited);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<string>(boost::any_cast<string>(m["ContactType"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("TransferOutProhibited") != m.end() && !m["TransferOutProhibited"].empty()) {
      transferOutProhibited = make_shared<bool>(boost::any_cast<bool>(m["TransferOutProhibited"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByNewContactRequest() = default;
};
class SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody() {}

  explicit SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody() = default;
};
class SaveBatchTaskForUpdatingContactInfoByNewContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody> body{};

  SaveBatchTaskForUpdatingContactInfoByNewContactResponse() {}

  explicit SaveBatchTaskForUpdatingContactInfoByNewContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForUpdatingContactInfoByNewContactResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByNewContactResponse() = default;
};
class SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactType{};
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<bool> transferOutProhibited{};
  shared_ptr<string> userClientIp{};

  SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() {}

  explicit SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (transferOutProhibited) {
      res["TransferOutProhibited"] = boost::any(*transferOutProhibited);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<string>(boost::any_cast<string>(m["ContactType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("TransferOutProhibited") != m.end() && !m["TransferOutProhibited"].empty()) {
      transferOutProhibited = make_shared<bool>(boost::any_cast<bool>(m["TransferOutProhibited"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() = default;
};
class SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody() {}

  explicit SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody() = default;
};
class SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody> body{};

  SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse() {}

  explicit SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponseBody>(model1);
      }
    }
  }


  virtual ~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse() = default;
};
class SaveDomainGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveDomainGroupRequest() {}

  explicit SaveDomainGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveDomainGroupRequest() = default;
};
class SaveDomainGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> beingDeleted{};
  shared_ptr<string> creationDate{};
  shared_ptr<long> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainGroupStatus{};
  shared_ptr<string> modificationDate{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  SaveDomainGroupResponseBody() {}

  explicit SaveDomainGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beingDeleted) {
      res["BeingDeleted"] = boost::any(*beingDeleted);
    }
    if (creationDate) {
      res["CreationDate"] = boost::any(*creationDate);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainGroupStatus) {
      res["DomainGroupStatus"] = boost::any(*domainGroupStatus);
    }
    if (modificationDate) {
      res["ModificationDate"] = boost::any(*modificationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeingDeleted") != m.end() && !m["BeingDeleted"].empty()) {
      beingDeleted = make_shared<bool>(boost::any_cast<bool>(m["BeingDeleted"]));
    }
    if (m.find("CreationDate") != m.end() && !m["CreationDate"].empty()) {
      creationDate = make_shared<string>(boost::any_cast<string>(m["CreationDate"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainGroupStatus") != m.end() && !m["DomainGroupStatus"].empty()) {
      domainGroupStatus = make_shared<string>(boost::any_cast<string>(m["DomainGroupStatus"]));
    }
    if (m.find("ModificationDate") != m.end() && !m["ModificationDate"].empty()) {
      modificationDate = make_shared<string>(boost::any_cast<string>(m["ModificationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~SaveDomainGroupResponseBody() = default;
};
class SaveDomainGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveDomainGroupResponseBody> body{};

  SaveDomainGroupResponse() {}

  explicit SaveDomainGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveDomainGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveDomainGroupResponseBody>(model1);
      }
    }
  }


  virtual ~SaveDomainGroupResponse() = default;
};
class SaveRegistrantProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<bool> defaultRegistrantProfile{};
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantProfileType{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveRegistrantProfileRequest() {}

  explicit SaveRegistrantProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (defaultRegistrantProfile) {
      res["DefaultRegistrantProfile"] = boost::any(*defaultRegistrantProfile);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantProfileType) {
      res["RegistrantProfileType"] = boost::any(*registrantProfileType);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("DefaultRegistrantProfile") != m.end() && !m["DefaultRegistrantProfile"].empty()) {
      defaultRegistrantProfile = make_shared<bool>(boost::any_cast<bool>(m["DefaultRegistrantProfile"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantProfileType") != m.end() && !m["RegistrantProfileType"].empty()) {
      registrantProfileType = make_shared<string>(boost::any_cast<string>(m["RegistrantProfileType"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveRegistrantProfileRequest() = default;
};
class SaveRegistrantProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> requestId{};

  SaveRegistrantProfileResponseBody() {}

  explicit SaveRegistrantProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SaveRegistrantProfileResponseBody() = default;
};
class SaveRegistrantProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveRegistrantProfileResponseBody> body{};

  SaveRegistrantProfileResponse() {}

  explicit SaveRegistrantProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveRegistrantProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveRegistrantProfileResponseBody>(model1);
      }
    }
  }


  virtual ~SaveRegistrantProfileResponse() = default;
};
class SaveRegistrantProfileRealNameVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> email{};
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> lang{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantProfileType{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveRegistrantProfileRealNameVerificationRequest() {}

  explicit SaveRegistrantProfileRealNameVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantProfileType) {
      res["RegistrantProfileType"] = boost::any(*registrantProfileType);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantProfileType") != m.end() && !m["RegistrantProfileType"].empty()) {
      registrantProfileType = make_shared<string>(boost::any_cast<string>(m["RegistrantProfileType"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveRegistrantProfileRealNameVerificationRequest() = default;
};
class SaveRegistrantProfileRealNameVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> requestId{};

  SaveRegistrantProfileRealNameVerificationResponseBody() {}

  explicit SaveRegistrantProfileRealNameVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SaveRegistrantProfileRealNameVerificationResponseBody() = default;
};
class SaveRegistrantProfileRealNameVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveRegistrantProfileRealNameVerificationResponseBody> body{};

  SaveRegistrantProfileRealNameVerificationResponse() {}

  explicit SaveRegistrantProfileRealNameVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveRegistrantProfileRealNameVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveRegistrantProfileRealNameVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~SaveRegistrantProfileRealNameVerificationResponse() = default;
};
class SaveSingleTaskForAddingDSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<long> digestType{};
  shared_ptr<string> domainName{};
  shared_ptr<long> keyTag{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForAddingDSRecordRequest() {}

  explicit SaveSingleTaskForAddingDSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (digestType) {
      res["DigestType"] = boost::any(*digestType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (keyTag) {
      res["KeyTag"] = boost::any(*keyTag);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<long>(boost::any_cast<long>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("DigestType") != m.end() && !m["DigestType"].empty()) {
      digestType = make_shared<long>(boost::any_cast<long>(m["DigestType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("KeyTag") != m.end() && !m["KeyTag"].empty()) {
      keyTag = make_shared<long>(boost::any_cast<long>(m["KeyTag"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForAddingDSRecordRequest() = default;
};
class SaveSingleTaskForAddingDSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForAddingDSRecordResponseBody() {}

  explicit SaveSingleTaskForAddingDSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForAddingDSRecordResponseBody() = default;
};
class SaveSingleTaskForAddingDSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForAddingDSRecordResponseBody> body{};

  SaveSingleTaskForAddingDSRecordResponse() {}

  explicit SaveSingleTaskForAddingDSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForAddingDSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForAddingDSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForAddingDSRecordResponse() = default;
};
class SaveSingleTaskForApprovingTransferOutRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForApprovingTransferOutRequest() {}

  explicit SaveSingleTaskForApprovingTransferOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForApprovingTransferOutRequest() = default;
};
class SaveSingleTaskForApprovingTransferOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForApprovingTransferOutResponseBody() {}

  explicit SaveSingleTaskForApprovingTransferOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForApprovingTransferOutResponseBody() = default;
};
class SaveSingleTaskForApprovingTransferOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForApprovingTransferOutResponseBody> body{};

  SaveSingleTaskForApprovingTransferOutResponse() {}

  explicit SaveSingleTaskForApprovingTransferOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForApprovingTransferOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForApprovingTransferOutResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForApprovingTransferOutResponse() = default;
};
class SaveSingleTaskForAssociatingEnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForAssociatingEnsRequest() {}

  explicit SaveSingleTaskForAssociatingEnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForAssociatingEnsRequest() = default;
};
class SaveSingleTaskForAssociatingEnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForAssociatingEnsResponseBody() {}

  explicit SaveSingleTaskForAssociatingEnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForAssociatingEnsResponseBody() = default;
};
class SaveSingleTaskForAssociatingEnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForAssociatingEnsResponseBody> body{};

  SaveSingleTaskForAssociatingEnsResponse() {}

  explicit SaveSingleTaskForAssociatingEnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForAssociatingEnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForAssociatingEnsResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForAssociatingEnsResponse() = default;
};
class SaveSingleTaskForCancelingTransferInRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCancelingTransferInRequest() {}

  explicit SaveSingleTaskForCancelingTransferInRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferInRequest() = default;
};
class SaveSingleTaskForCancelingTransferInResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCancelingTransferInResponseBody() {}

  explicit SaveSingleTaskForCancelingTransferInResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferInResponseBody() = default;
};
class SaveSingleTaskForCancelingTransferInResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCancelingTransferInResponseBody> body{};

  SaveSingleTaskForCancelingTransferInResponse() {}

  explicit SaveSingleTaskForCancelingTransferInResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCancelingTransferInResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCancelingTransferInResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferInResponse() = default;
};
class SaveSingleTaskForCancelingTransferOutRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCancelingTransferOutRequest() {}

  explicit SaveSingleTaskForCancelingTransferOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferOutRequest() = default;
};
class SaveSingleTaskForCancelingTransferOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCancelingTransferOutResponseBody() {}

  explicit SaveSingleTaskForCancelingTransferOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferOutResponseBody() = default;
};
class SaveSingleTaskForCancelingTransferOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCancelingTransferOutResponseBody> body{};

  SaveSingleTaskForCancelingTransferOutResponse() {}

  explicit SaveSingleTaskForCancelingTransferOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCancelingTransferOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCancelingTransferOutResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCancelingTransferOutResponse() = default;
};
class SaveSingleTaskForCreatingDnsHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> dnsName{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ip{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCreatingDnsHostRequest() {}

  explicit SaveSingleTaskForCreatingDnsHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingDnsHostRequest() = default;
};
class SaveSingleTaskForCreatingDnsHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCreatingDnsHostResponseBody() {}

  explicit SaveSingleTaskForCreatingDnsHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingDnsHostResponseBody() = default;
};
class SaveSingleTaskForCreatingDnsHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCreatingDnsHostResponseBody> body{};

  SaveSingleTaskForCreatingDnsHostResponse() {}

  explicit SaveSingleTaskForCreatingDnsHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCreatingDnsHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCreatingDnsHostResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCreatingDnsHostResponse() = default;
};
class SaveSingleTaskForCreatingOrderActivateRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<bool> aliyunDns{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> dns1{};
  shared_ptr<string> dns2{};
  shared_ptr<string> domainName{};
  shared_ptr<string> email{};
  shared_ptr<bool> enableDomainProxy{};
  shared_ptr<string> lang{};
  shared_ptr<bool> permitPremiumActivation{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> promotionNo{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> registrantType{};
  shared_ptr<long> subscriptionDuration{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<bool> trademarkDomainActivation{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveSingleTaskForCreatingOrderActivateRequest() {}

  explicit SaveSingleTaskForCreatingOrderActivateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (aliyunDns) {
      res["AliyunDns"] = boost::any(*aliyunDns);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (dns1) {
      res["Dns1"] = boost::any(*dns1);
    }
    if (dns2) {
      res["Dns2"] = boost::any(*dns2);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (enableDomainProxy) {
      res["EnableDomainProxy"] = boost::any(*enableDomainProxy);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (permitPremiumActivation) {
      res["PermitPremiumActivation"] = boost::any(*permitPremiumActivation);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (subscriptionDuration) {
      res["SubscriptionDuration"] = boost::any(*subscriptionDuration);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (trademarkDomainActivation) {
      res["TrademarkDomainActivation"] = boost::any(*trademarkDomainActivation);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AliyunDns") != m.end() && !m["AliyunDns"].empty()) {
      aliyunDns = make_shared<bool>(boost::any_cast<bool>(m["AliyunDns"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Dns1") != m.end() && !m["Dns1"].empty()) {
      dns1 = make_shared<string>(boost::any_cast<string>(m["Dns1"]));
    }
    if (m.find("Dns2") != m.end() && !m["Dns2"].empty()) {
      dns2 = make_shared<string>(boost::any_cast<string>(m["Dns2"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EnableDomainProxy") != m.end() && !m["EnableDomainProxy"].empty()) {
      enableDomainProxy = make_shared<bool>(boost::any_cast<bool>(m["EnableDomainProxy"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PermitPremiumActivation") != m.end() && !m["PermitPremiumActivation"].empty()) {
      permitPremiumActivation = make_shared<bool>(boost::any_cast<bool>(m["PermitPremiumActivation"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("SubscriptionDuration") != m.end() && !m["SubscriptionDuration"].empty()) {
      subscriptionDuration = make_shared<long>(boost::any_cast<long>(m["SubscriptionDuration"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("TrademarkDomainActivation") != m.end() && !m["TrademarkDomainActivation"].empty()) {
      trademarkDomainActivation = make_shared<bool>(boost::any_cast<bool>(m["TrademarkDomainActivation"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderActivateRequest() = default;
};
class SaveSingleTaskForCreatingOrderActivateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCreatingOrderActivateResponseBody() {}

  explicit SaveSingleTaskForCreatingOrderActivateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderActivateResponseBody() = default;
};
class SaveSingleTaskForCreatingOrderActivateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCreatingOrderActivateResponseBody> body{};

  SaveSingleTaskForCreatingOrderActivateResponse() {}

  explicit SaveSingleTaskForCreatingOrderActivateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCreatingOrderActivateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCreatingOrderActivateResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderActivateResponse() = default;
};
class SaveSingleTaskForCreatingOrderRedeemRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<long> currentExpirationDate{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> promotionNo{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCreatingOrderRedeemRequest() {}

  explicit SaveSingleTaskForCreatingOrderRedeemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (currentExpirationDate) {
      res["CurrentExpirationDate"] = boost::any(*currentExpirationDate);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CurrentExpirationDate") != m.end() && !m["CurrentExpirationDate"].empty()) {
      currentExpirationDate = make_shared<long>(boost::any_cast<long>(m["CurrentExpirationDate"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRedeemRequest() = default;
};
class SaveSingleTaskForCreatingOrderRedeemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCreatingOrderRedeemResponseBody() {}

  explicit SaveSingleTaskForCreatingOrderRedeemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRedeemResponseBody() = default;
};
class SaveSingleTaskForCreatingOrderRedeemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCreatingOrderRedeemResponseBody> body{};

  SaveSingleTaskForCreatingOrderRedeemResponse() {}

  explicit SaveSingleTaskForCreatingOrderRedeemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCreatingOrderRedeemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCreatingOrderRedeemResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRedeemResponse() = default;
};
class SaveSingleTaskForCreatingOrderRenewRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<long> currentExpirationDate{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> promotionNo{};
  shared_ptr<long> subscriptionDuration{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCreatingOrderRenewRequest() {}

  explicit SaveSingleTaskForCreatingOrderRenewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (currentExpirationDate) {
      res["CurrentExpirationDate"] = boost::any(*currentExpirationDate);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (subscriptionDuration) {
      res["SubscriptionDuration"] = boost::any(*subscriptionDuration);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CurrentExpirationDate") != m.end() && !m["CurrentExpirationDate"].empty()) {
      currentExpirationDate = make_shared<long>(boost::any_cast<long>(m["CurrentExpirationDate"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("SubscriptionDuration") != m.end() && !m["SubscriptionDuration"].empty()) {
      subscriptionDuration = make_shared<long>(boost::any_cast<long>(m["SubscriptionDuration"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRenewRequest() = default;
};
class SaveSingleTaskForCreatingOrderRenewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCreatingOrderRenewResponseBody() {}

  explicit SaveSingleTaskForCreatingOrderRenewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRenewResponseBody() = default;
};
class SaveSingleTaskForCreatingOrderRenewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCreatingOrderRenewResponseBody> body{};

  SaveSingleTaskForCreatingOrderRenewResponse() {}

  explicit SaveSingleTaskForCreatingOrderRenewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCreatingOrderRenewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCreatingOrderRenewResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderRenewResponse() = default;
};
class SaveSingleTaskForCreatingOrderTransferRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationCode{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> permitPremiumTransfer{};
  shared_ptr<string> promotionNo{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<bool> useCoupon{};
  shared_ptr<bool> usePromotion{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForCreatingOrderTransferRequest() {}

  explicit SaveSingleTaskForCreatingOrderTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationCode) {
      res["AuthorizationCode"] = boost::any(*authorizationCode);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (permitPremiumTransfer) {
      res["PermitPremiumTransfer"] = boost::any(*permitPremiumTransfer);
    }
    if (promotionNo) {
      res["PromotionNo"] = boost::any(*promotionNo);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    if (usePromotion) {
      res["UsePromotion"] = boost::any(*usePromotion);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationCode") != m.end() && !m["AuthorizationCode"].empty()) {
      authorizationCode = make_shared<string>(boost::any_cast<string>(m["AuthorizationCode"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PermitPremiumTransfer") != m.end() && !m["PermitPremiumTransfer"].empty()) {
      permitPremiumTransfer = make_shared<bool>(boost::any_cast<bool>(m["PermitPremiumTransfer"]));
    }
    if (m.find("PromotionNo") != m.end() && !m["PromotionNo"].empty()) {
      promotionNo = make_shared<string>(boost::any_cast<string>(m["PromotionNo"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
    if (m.find("UsePromotion") != m.end() && !m["UsePromotion"].empty()) {
      usePromotion = make_shared<bool>(boost::any_cast<bool>(m["UsePromotion"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderTransferRequest() = default;
};
class SaveSingleTaskForCreatingOrderTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForCreatingOrderTransferResponseBody() {}

  explicit SaveSingleTaskForCreatingOrderTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderTransferResponseBody() = default;
};
class SaveSingleTaskForCreatingOrderTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForCreatingOrderTransferResponseBody> body{};

  SaveSingleTaskForCreatingOrderTransferResponse() {}

  explicit SaveSingleTaskForCreatingOrderTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForCreatingOrderTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForCreatingOrderTransferResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForCreatingOrderTransferResponse() = default;
};
class SaveSingleTaskForDeletingDSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> keyTag{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForDeletingDSRecordRequest() {}

  explicit SaveSingleTaskForDeletingDSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (keyTag) {
      res["KeyTag"] = boost::any(*keyTag);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("KeyTag") != m.end() && !m["KeyTag"].empty()) {
      keyTag = make_shared<long>(boost::any_cast<long>(m["KeyTag"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForDeletingDSRecordRequest() = default;
};
class SaveSingleTaskForDeletingDSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForDeletingDSRecordResponseBody() {}

  explicit SaveSingleTaskForDeletingDSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForDeletingDSRecordResponseBody() = default;
};
class SaveSingleTaskForDeletingDSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForDeletingDSRecordResponseBody> body{};

  SaveSingleTaskForDeletingDSRecordResponse() {}

  explicit SaveSingleTaskForDeletingDSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForDeletingDSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForDeletingDSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForDeletingDSRecordResponse() = default;
};
class SaveSingleTaskForDeletingDnsHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> dnsName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForDeletingDnsHostRequest() {}

  explicit SaveSingleTaskForDeletingDnsHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForDeletingDnsHostRequest() = default;
};
class SaveSingleTaskForDeletingDnsHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForDeletingDnsHostResponseBody() {}

  explicit SaveSingleTaskForDeletingDnsHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForDeletingDnsHostResponseBody() = default;
};
class SaveSingleTaskForDeletingDnsHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForDeletingDnsHostResponseBody> body{};

  SaveSingleTaskForDeletingDnsHostResponse() {}

  explicit SaveSingleTaskForDeletingDnsHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForDeletingDnsHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForDeletingDnsHostResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForDeletingDnsHostResponse() = default;
};
class SaveSingleTaskForDisassociatingEnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForDisassociatingEnsRequest() {}

  explicit SaveSingleTaskForDisassociatingEnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForDisassociatingEnsRequest() = default;
};
class SaveSingleTaskForDisassociatingEnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForDisassociatingEnsResponseBody() {}

  explicit SaveSingleTaskForDisassociatingEnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForDisassociatingEnsResponseBody() = default;
};
class SaveSingleTaskForDisassociatingEnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForDisassociatingEnsResponseBody> body{};

  SaveSingleTaskForDisassociatingEnsResponse() {}

  explicit SaveSingleTaskForDisassociatingEnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForDisassociatingEnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForDisassociatingEnsResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForDisassociatingEnsResponse() = default;
};
class SaveSingleTaskForDomainNameProxyServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForDomainNameProxyServiceRequest() {}

  explicit SaveSingleTaskForDomainNameProxyServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForDomainNameProxyServiceRequest() = default;
};
class SaveSingleTaskForDomainNameProxyServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForDomainNameProxyServiceResponseBody() {}

  explicit SaveSingleTaskForDomainNameProxyServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForDomainNameProxyServiceResponseBody() = default;
};
class SaveSingleTaskForDomainNameProxyServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForDomainNameProxyServiceResponseBody> body{};

  SaveSingleTaskForDomainNameProxyServiceResponse() {}

  explicit SaveSingleTaskForDomainNameProxyServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForDomainNameProxyServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForDomainNameProxyServiceResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForDomainNameProxyServiceResponse() = default;
};
class SaveSingleTaskForModifyingDSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> algorithm{};
  shared_ptr<string> digest{};
  shared_ptr<long> digestType{};
  shared_ptr<string> domainName{};
  shared_ptr<long> keyTag{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForModifyingDSRecordRequest() {}

  explicit SaveSingleTaskForModifyingDSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (digestType) {
      res["DigestType"] = boost::any(*digestType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (keyTag) {
      res["KeyTag"] = boost::any(*keyTag);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<long>(boost::any_cast<long>(m["Algorithm"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("DigestType") != m.end() && !m["DigestType"].empty()) {
      digestType = make_shared<long>(boost::any_cast<long>(m["DigestType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("KeyTag") != m.end() && !m["KeyTag"].empty()) {
      keyTag = make_shared<long>(boost::any_cast<long>(m["KeyTag"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForModifyingDSRecordRequest() = default;
};
class SaveSingleTaskForModifyingDSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForModifyingDSRecordResponseBody() {}

  explicit SaveSingleTaskForModifyingDSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForModifyingDSRecordResponseBody() = default;
};
class SaveSingleTaskForModifyingDSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForModifyingDSRecordResponseBody> body{};

  SaveSingleTaskForModifyingDSRecordResponse() {}

  explicit SaveSingleTaskForModifyingDSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForModifyingDSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForModifyingDSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForModifyingDSRecordResponse() = default;
};
class SaveSingleTaskForModifyingDnsHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> dnsName{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ip{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForModifyingDnsHostRequest() {}

  explicit SaveSingleTaskForModifyingDnsHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsName) {
      res["DnsName"] = boost::any(*dnsName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsName") != m.end() && !m["DnsName"].empty()) {
      dnsName = make_shared<string>(boost::any_cast<string>(m["DnsName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForModifyingDnsHostRequest() = default;
};
class SaveSingleTaskForModifyingDnsHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForModifyingDnsHostResponseBody() {}

  explicit SaveSingleTaskForModifyingDnsHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForModifyingDnsHostResponseBody() = default;
};
class SaveSingleTaskForModifyingDnsHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForModifyingDnsHostResponseBody> body{};

  SaveSingleTaskForModifyingDnsHostResponse() {}

  explicit SaveSingleTaskForModifyingDnsHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForModifyingDnsHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForModifyingDnsHostResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForModifyingDnsHostResponse() = default;
};
class SaveSingleTaskForQueryingTransferAuthorizationCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForQueryingTransferAuthorizationCodeRequest() {}

  explicit SaveSingleTaskForQueryingTransferAuthorizationCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForQueryingTransferAuthorizationCodeRequest() = default;
};
class SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody() {}

  explicit SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody() = default;
};
class SaveSingleTaskForQueryingTransferAuthorizationCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody> body{};

  SaveSingleTaskForQueryingTransferAuthorizationCodeResponse() {}

  explicit SaveSingleTaskForQueryingTransferAuthorizationCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForQueryingTransferAuthorizationCodeResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForQueryingTransferAuthorizationCodeResponse() = default;
};
class SaveSingleTaskForSaveArtExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<string> dateOrPeriod{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> domainName{};
  shared_ptr<string> features{};
  shared_ptr<string> inscriptionsAndMarkings{};
  shared_ptr<string> lang{};
  shared_ptr<string> maker{};
  shared_ptr<string> materialsAndTechniques{};
  shared_ptr<string> objectType{};
  shared_ptr<string> reference{};
  shared_ptr<string> subject{};
  shared_ptr<string> title{};

  SaveSingleTaskForSaveArtExtensionRequest() {}

  explicit SaveSingleTaskForSaveArtExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateOrPeriod) {
      res["DateOrPeriod"] = boost::any(*dateOrPeriod);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (inscriptionsAndMarkings) {
      res["InscriptionsAndMarkings"] = boost::any(*inscriptionsAndMarkings);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maker) {
      res["Maker"] = boost::any(*maker);
    }
    if (materialsAndTechniques) {
      res["MaterialsAndTechniques"] = boost::any(*materialsAndTechniques);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (reference) {
      res["Reference"] = boost::any(*reference);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateOrPeriod") != m.end() && !m["DateOrPeriod"].empty()) {
      dateOrPeriod = make_shared<string>(boost::any_cast<string>(m["DateOrPeriod"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      features = make_shared<string>(boost::any_cast<string>(m["Features"]));
    }
    if (m.find("InscriptionsAndMarkings") != m.end() && !m["InscriptionsAndMarkings"].empty()) {
      inscriptionsAndMarkings = make_shared<string>(boost::any_cast<string>(m["InscriptionsAndMarkings"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Maker") != m.end() && !m["Maker"].empty()) {
      maker = make_shared<string>(boost::any_cast<string>(m["Maker"]));
    }
    if (m.find("MaterialsAndTechniques") != m.end() && !m["MaterialsAndTechniques"].empty()) {
      materialsAndTechniques = make_shared<string>(boost::any_cast<string>(m["MaterialsAndTechniques"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Reference") != m.end() && !m["Reference"].empty()) {
      reference = make_shared<string>(boost::any_cast<string>(m["Reference"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SaveSingleTaskForSaveArtExtensionRequest() = default;
};
class SaveSingleTaskForSaveArtExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForSaveArtExtensionResponseBody() {}

  explicit SaveSingleTaskForSaveArtExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForSaveArtExtensionResponseBody() = default;
};
class SaveSingleTaskForSaveArtExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForSaveArtExtensionResponseBody> body{};

  SaveSingleTaskForSaveArtExtensionResponse() {}

  explicit SaveSingleTaskForSaveArtExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForSaveArtExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForSaveArtExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForSaveArtExtensionResponse() = default;
};
class SaveSingleTaskForSynchronizingDSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForSynchronizingDSRecordRequest() {}

  explicit SaveSingleTaskForSynchronizingDSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDSRecordRequest() = default;
};
class SaveSingleTaskForSynchronizingDSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForSynchronizingDSRecordResponseBody() {}

  explicit SaveSingleTaskForSynchronizingDSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDSRecordResponseBody() = default;
};
class SaveSingleTaskForSynchronizingDSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForSynchronizingDSRecordResponseBody> body{};

  SaveSingleTaskForSynchronizingDSRecordResponse() {}

  explicit SaveSingleTaskForSynchronizingDSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForSynchronizingDSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForSynchronizingDSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDSRecordResponse() = default;
};
class SaveSingleTaskForSynchronizingDnsHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForSynchronizingDnsHostRequest() {}

  explicit SaveSingleTaskForSynchronizingDnsHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDnsHostRequest() = default;
};
class SaveSingleTaskForSynchronizingDnsHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForSynchronizingDnsHostResponseBody() {}

  explicit SaveSingleTaskForSynchronizingDnsHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDnsHostResponseBody() = default;
};
class SaveSingleTaskForSynchronizingDnsHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForSynchronizingDnsHostResponseBody> body{};

  SaveSingleTaskForSynchronizingDnsHostResponse() {}

  explicit SaveSingleTaskForSynchronizingDnsHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForSynchronizingDnsHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForSynchronizingDnsHostResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForSynchronizingDnsHostResponse() = default;
};
class SaveSingleTaskForTransferProhibitionLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForTransferProhibitionLockRequest() {}

  explicit SaveSingleTaskForTransferProhibitionLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForTransferProhibitionLockRequest() = default;
};
class SaveSingleTaskForTransferProhibitionLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForTransferProhibitionLockResponseBody() {}

  explicit SaveSingleTaskForTransferProhibitionLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForTransferProhibitionLockResponseBody() = default;
};
class SaveSingleTaskForTransferProhibitionLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForTransferProhibitionLockResponseBody> body{};

  SaveSingleTaskForTransferProhibitionLockResponse() {}

  explicit SaveSingleTaskForTransferProhibitionLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForTransferProhibitionLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForTransferProhibitionLockResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForTransferProhibitionLockResponse() = default;
};
class SaveSingleTaskForUpdateProhibitionLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<bool> status{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForUpdateProhibitionLockRequest() {}

  explicit SaveSingleTaskForUpdateProhibitionLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForUpdateProhibitionLockRequest() = default;
};
class SaveSingleTaskForUpdateProhibitionLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForUpdateProhibitionLockResponseBody() {}

  explicit SaveSingleTaskForUpdateProhibitionLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForUpdateProhibitionLockResponseBody() = default;
};
class SaveSingleTaskForUpdateProhibitionLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForUpdateProhibitionLockResponseBody> body{};

  SaveSingleTaskForUpdateProhibitionLockResponse() {}

  explicit SaveSingleTaskForUpdateProhibitionLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForUpdateProhibitionLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForUpdateProhibitionLockResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForUpdateProhibitionLockResponse() = default;
};
class SaveSingleTaskForUpdatingContactInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> addTransferLock{};
  shared_ptr<string> contactType{};
  shared_ptr<string> domainName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> userClientIp{};

  SaveSingleTaskForUpdatingContactInfoRequest() {}

  explicit SaveSingleTaskForUpdatingContactInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTransferLock) {
      res["AddTransferLock"] = boost::any(*addTransferLock);
    }
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTransferLock") != m.end() && !m["AddTransferLock"].empty()) {
      addTransferLock = make_shared<bool>(boost::any_cast<bool>(m["AddTransferLock"]));
    }
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<string>(boost::any_cast<string>(m["ContactType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveSingleTaskForUpdatingContactInfoRequest() = default;
};
class SaveSingleTaskForUpdatingContactInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveSingleTaskForUpdatingContactInfoResponseBody() {}

  explicit SaveSingleTaskForUpdatingContactInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveSingleTaskForUpdatingContactInfoResponseBody() = default;
};
class SaveSingleTaskForUpdatingContactInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSingleTaskForUpdatingContactInfoResponseBody> body{};

  SaveSingleTaskForUpdatingContactInfoResponse() {}

  explicit SaveSingleTaskForUpdatingContactInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSingleTaskForUpdatingContactInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSingleTaskForUpdatingContactInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSingleTaskForUpdatingContactInfoResponse() = default;
};
class SaveTaskForSubmittingDomainDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveTaskForSubmittingDomainDeleteRequest() {}

  explicit SaveTaskForSubmittingDomainDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainDeleteRequest() = default;
};
class SaveTaskForSubmittingDomainDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveTaskForSubmittingDomainDeleteResponseBody() {}

  explicit SaveTaskForSubmittingDomainDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainDeleteResponseBody() = default;
};
class SaveTaskForSubmittingDomainDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTaskForSubmittingDomainDeleteResponseBody> body{};

  SaveTaskForSubmittingDomainDeleteResponse() {}

  explicit SaveTaskForSubmittingDomainDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveTaskForSubmittingDomainDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTaskForSubmittingDomainDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTaskForSubmittingDomainDeleteResponse() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody> body{};

  SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> userClientIp{};

  SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody() = default;
};
class SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody> body{};

  SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse() {}

  explicit SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse() = default;
};
class SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> identityCredential{};
  shared_ptr<string> identityCredentialNo{};
  shared_ptr<string> identityCredentialType{};
  shared_ptr<string> lang{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<bool> transferOutProhibited{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest() {}

  explicit SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (identityCredential) {
      res["IdentityCredential"] = boost::any(*identityCredential);
    }
    if (identityCredentialNo) {
      res["IdentityCredentialNo"] = boost::any(*identityCredentialNo);
    }
    if (identityCredentialType) {
      res["IdentityCredentialType"] = boost::any(*identityCredentialType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (transferOutProhibited) {
      res["TransferOutProhibited"] = boost::any(*transferOutProhibited);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IdentityCredential") != m.end() && !m["IdentityCredential"].empty()) {
      identityCredential = make_shared<string>(boost::any_cast<string>(m["IdentityCredential"]));
    }
    if (m.find("IdentityCredentialNo") != m.end() && !m["IdentityCredentialNo"].empty()) {
      identityCredentialNo = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialNo"]));
    }
    if (m.find("IdentityCredentialType") != m.end() && !m["IdentityCredentialType"].empty()) {
      identityCredentialType = make_shared<string>(boost::any_cast<string>(m["IdentityCredentialType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("TransferOutProhibited") != m.end() && !m["TransferOutProhibited"].empty()) {
      transferOutProhibited = make_shared<bool>(boost::any_cast<bool>(m["TransferOutProhibited"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest() = default;
};
class SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody() {}

  explicit SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody() = default;
};
class SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody> body{};

  SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse() {}

  explicit SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse() = default;
};
class SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<long> registrantProfileId{};
  shared_ptr<bool> transferOutProhibited{};
  shared_ptr<string> userClientIp{};

  SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest() {}

  explicit SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (transferOutProhibited) {
      res["TransferOutProhibited"] = boost::any(*transferOutProhibited);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("TransferOutProhibited") != m.end() && !m["TransferOutProhibited"].empty()) {
      transferOutProhibited = make_shared<bool>(boost::any_cast<bool>(m["TransferOutProhibited"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest() = default;
};
class SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskNo{};

  SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody() {}

  explicit SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskNo) {
      res["TaskNo"] = boost::any(*taskNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskNo") != m.end() && !m["TaskNo"].empty()) {
      taskNo = make_shared<string>(boost::any_cast<string>(m["TaskNo"]));
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody() = default;
};
class SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody> body{};

  SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse() {}

  explicit SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse() = default;
};
class ScrollDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainGroupId{};
  shared_ptr<long> domainStatus{};
  shared_ptr<long> endExpirationDate{};
  shared_ptr<long> endLength{};
  shared_ptr<long> endRegistrationDate{};
  shared_ptr<string> excluded{};
  shared_ptr<bool> excludedPrefix{};
  shared_ptr<bool> excludedSuffix{};
  shared_ptr<long> form{};
  shared_ptr<string> keyWord{};
  shared_ptr<bool> keyWordPrefix{};
  shared_ptr<bool> keyWordSuffix{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productDomainType{};
  shared_ptr<string> scrollId{};
  shared_ptr<long> startExpirationDate{};
  shared_ptr<long> startLength{};
  shared_ptr<long> startRegistrationDate{};
  shared_ptr<string> suffixs{};
  shared_ptr<long> tradeType{};
  shared_ptr<string> userClientIp{};

  ScrollDomainListRequest() {}

  explicit ScrollDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (endExpirationDate) {
      res["EndExpirationDate"] = boost::any(*endExpirationDate);
    }
    if (endLength) {
      res["EndLength"] = boost::any(*endLength);
    }
    if (endRegistrationDate) {
      res["EndRegistrationDate"] = boost::any(*endRegistrationDate);
    }
    if (excluded) {
      res["Excluded"] = boost::any(*excluded);
    }
    if (excludedPrefix) {
      res["ExcludedPrefix"] = boost::any(*excludedPrefix);
    }
    if (excludedSuffix) {
      res["ExcludedSuffix"] = boost::any(*excludedSuffix);
    }
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (keyWordPrefix) {
      res["KeyWordPrefix"] = boost::any(*keyWordPrefix);
    }
    if (keyWordSuffix) {
      res["KeyWordSuffix"] = boost::any(*keyWordSuffix);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productDomainType) {
      res["ProductDomainType"] = boost::any(*productDomainType);
    }
    if (scrollId) {
      res["ScrollId"] = boost::any(*scrollId);
    }
    if (startExpirationDate) {
      res["StartExpirationDate"] = boost::any(*startExpirationDate);
    }
    if (startLength) {
      res["StartLength"] = boost::any(*startLength);
    }
    if (startRegistrationDate) {
      res["StartRegistrationDate"] = boost::any(*startRegistrationDate);
    }
    if (suffixs) {
      res["Suffixs"] = boost::any(*suffixs);
    }
    if (tradeType) {
      res["TradeType"] = boost::any(*tradeType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<long>(boost::any_cast<long>(m["DomainStatus"]));
    }
    if (m.find("EndExpirationDate") != m.end() && !m["EndExpirationDate"].empty()) {
      endExpirationDate = make_shared<long>(boost::any_cast<long>(m["EndExpirationDate"]));
    }
    if (m.find("EndLength") != m.end() && !m["EndLength"].empty()) {
      endLength = make_shared<long>(boost::any_cast<long>(m["EndLength"]));
    }
    if (m.find("EndRegistrationDate") != m.end() && !m["EndRegistrationDate"].empty()) {
      endRegistrationDate = make_shared<long>(boost::any_cast<long>(m["EndRegistrationDate"]));
    }
    if (m.find("Excluded") != m.end() && !m["Excluded"].empty()) {
      excluded = make_shared<string>(boost::any_cast<string>(m["Excluded"]));
    }
    if (m.find("ExcludedPrefix") != m.end() && !m["ExcludedPrefix"].empty()) {
      excludedPrefix = make_shared<bool>(boost::any_cast<bool>(m["ExcludedPrefix"]));
    }
    if (m.find("ExcludedSuffix") != m.end() && !m["ExcludedSuffix"].empty()) {
      excludedSuffix = make_shared<bool>(boost::any_cast<bool>(m["ExcludedSuffix"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<long>(boost::any_cast<long>(m["Form"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("KeyWordPrefix") != m.end() && !m["KeyWordPrefix"].empty()) {
      keyWordPrefix = make_shared<bool>(boost::any_cast<bool>(m["KeyWordPrefix"]));
    }
    if (m.find("KeyWordSuffix") != m.end() && !m["KeyWordSuffix"].empty()) {
      keyWordSuffix = make_shared<bool>(boost::any_cast<bool>(m["KeyWordSuffix"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductDomainType") != m.end() && !m["ProductDomainType"].empty()) {
      productDomainType = make_shared<string>(boost::any_cast<string>(m["ProductDomainType"]));
    }
    if (m.find("ScrollId") != m.end() && !m["ScrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["ScrollId"]));
    }
    if (m.find("StartExpirationDate") != m.end() && !m["StartExpirationDate"].empty()) {
      startExpirationDate = make_shared<long>(boost::any_cast<long>(m["StartExpirationDate"]));
    }
    if (m.find("StartLength") != m.end() && !m["StartLength"].empty()) {
      startLength = make_shared<long>(boost::any_cast<long>(m["StartLength"]));
    }
    if (m.find("StartRegistrationDate") != m.end() && !m["StartRegistrationDate"].empty()) {
      startRegistrationDate = make_shared<long>(boost::any_cast<long>(m["StartRegistrationDate"]));
    }
    if (m.find("Suffixs") != m.end() && !m["Suffixs"].empty()) {
      suffixs = make_shared<string>(boost::any_cast<string>(m["Suffixs"]));
    }
    if (m.find("TradeType") != m.end() && !m["TradeType"].empty()) {
      tradeType = make_shared<long>(boost::any_cast<long>(m["TradeType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~ScrollDomainListRequest() = default;
};
class ScrollDomainListResponseBodyDataDomainDnsList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dns{};

  ScrollDomainListResponseBodyDataDomainDnsList() {}

  explicit ScrollDomainListResponseBodyDataDomainDnsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dns = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ScrollDomainListResponseBodyDataDomainDnsList() = default;
};
class ScrollDomainListResponseBodyDataDomain : public Darabonba::Model {
public:
  shared_ptr<ScrollDomainListResponseBodyDataDomainDnsList> dnsList{};
  shared_ptr<string> domainAuditStatus{};
  shared_ptr<string> domainGroupId{};
  shared_ptr<string> domainGroupName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<string> email{};
  shared_ptr<long> expirationCurrDateDiff{};
  shared_ptr<string> expirationDate{};
  shared_ptr<long> expirationDateLong{};
  shared_ptr<string> expirationDateStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> premium{};
  shared_ptr<string> productId{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> registrationDate{};
  shared_ptr<long> registrationDateLong{};
  shared_ptr<string> remark{};
  shared_ptr<string> zhRegistrantOrganization{};

  ScrollDomainListResponseBodyDataDomain() {}

  explicit ScrollDomainListResponseBodyDataDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["DnsList"] = dnsList ? boost::any(dnsList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainAuditStatus) {
      res["DomainAuditStatus"] = boost::any(*domainAuditStatus);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainGroupName) {
      res["DomainGroupName"] = boost::any(*domainGroupName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (expirationCurrDateDiff) {
      res["ExpirationCurrDateDiff"] = boost::any(*expirationCurrDateDiff);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (expirationDateLong) {
      res["ExpirationDateLong"] = boost::any(*expirationDateLong);
    }
    if (expirationDateStatus) {
      res["ExpirationDateStatus"] = boost::any(*expirationDateStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (premium) {
      res["Premium"] = boost::any(*premium);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (registrationDate) {
      res["RegistrationDate"] = boost::any(*registrationDate);
    }
    if (registrationDateLong) {
      res["RegistrationDateLong"] = boost::any(*registrationDateLong);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsList") != m.end() && !m["DnsList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsList"].type()) {
        ScrollDomainListResponseBodyDataDomainDnsList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsList"]));
        dnsList = make_shared<ScrollDomainListResponseBodyDataDomainDnsList>(model1);
      }
    }
    if (m.find("DomainAuditStatus") != m.end() && !m["DomainAuditStatus"].empty()) {
      domainAuditStatus = make_shared<string>(boost::any_cast<string>(m["DomainAuditStatus"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<string>(boost::any_cast<string>(m["DomainGroupId"]));
    }
    if (m.find("DomainGroupName") != m.end() && !m["DomainGroupName"].empty()) {
      domainGroupName = make_shared<string>(boost::any_cast<string>(m["DomainGroupName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExpirationCurrDateDiff") != m.end() && !m["ExpirationCurrDateDiff"].empty()) {
      expirationCurrDateDiff = make_shared<long>(boost::any_cast<long>(m["ExpirationCurrDateDiff"]));
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("ExpirationDateLong") != m.end() && !m["ExpirationDateLong"].empty()) {
      expirationDateLong = make_shared<long>(boost::any_cast<long>(m["ExpirationDateLong"]));
    }
    if (m.find("ExpirationDateStatus") != m.end() && !m["ExpirationDateStatus"].empty()) {
      expirationDateStatus = make_shared<string>(boost::any_cast<string>(m["ExpirationDateStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Premium") != m.end() && !m["Premium"].empty()) {
      premium = make_shared<bool>(boost::any_cast<bool>(m["Premium"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("RegistrationDate") != m.end() && !m["RegistrationDate"].empty()) {
      registrationDate = make_shared<string>(boost::any_cast<string>(m["RegistrationDate"]));
    }
    if (m.find("RegistrationDateLong") != m.end() && !m["RegistrationDateLong"].empty()) {
      registrationDateLong = make_shared<long>(boost::any_cast<long>(m["RegistrationDateLong"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~ScrollDomainListResponseBodyDataDomain() = default;
};
class ScrollDomainListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ScrollDomainListResponseBodyDataDomain>> domain{};

  ScrollDomainListResponseBodyData() {}

  explicit ScrollDomainListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      vector<boost::any> temp1;
      for(auto item1:*domain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<ScrollDomainListResponseBodyDataDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScrollDomainListResponseBodyDataDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<ScrollDomainListResponseBodyDataDomain>>(expect1);
      }
    }
  }


  virtual ~ScrollDomainListResponseBodyData() = default;
};
class ScrollDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<ScrollDomainListResponseBodyData> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scrollId{};
  shared_ptr<long> totalItemNum{};

  ScrollDomainListResponseBody() {}

  explicit ScrollDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scrollId) {
      res["ScrollId"] = boost::any(*scrollId);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ScrollDomainListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ScrollDomainListResponseBodyData>(model1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScrollId") != m.end() && !m["ScrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["ScrollId"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
  }


  virtual ~ScrollDomainListResponseBody() = default;
};
class ScrollDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScrollDomainListResponseBody> body{};

  ScrollDomainListResponse() {}

  explicit ScrollDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScrollDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScrollDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~ScrollDomainListResponse() = default;
};
class SetDefaultRegistrantProfileRequest : public Darabonba::Model {
public:
  shared_ptr<long> registrantProfileId{};
  shared_ptr<string> userClientIp{};

  SetDefaultRegistrantProfileRequest() {}

  explicit SetDefaultRegistrantProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrantProfileId) {
      res["RegistrantProfileId"] = boost::any(*registrantProfileId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrantProfileId") != m.end() && !m["RegistrantProfileId"].empty()) {
      registrantProfileId = make_shared<long>(boost::any_cast<long>(m["RegistrantProfileId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SetDefaultRegistrantProfileRequest() = default;
};
class SetDefaultRegistrantProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultRegistrantProfileResponseBody() {}

  explicit SetDefaultRegistrantProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDefaultRegistrantProfileResponseBody() = default;
};
class SetDefaultRegistrantProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultRegistrantProfileResponseBody> body{};

  SetDefaultRegistrantProfileResponse() {}

  explicit SetDefaultRegistrantProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDefaultRegistrantProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultRegistrantProfileResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultRegistrantProfileResponse() = default;
};
class SubmitEmailVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<bool> sendIfExist{};
  shared_ptr<string> userClientIp{};

  SubmitEmailVerificationRequest() {}

  explicit SubmitEmailVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sendIfExist) {
      res["SendIfExist"] = boost::any(*sendIfExist);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SendIfExist") != m.end() && !m["SendIfExist"].empty()) {
      sendIfExist = make_shared<bool>(boost::any_cast<bool>(m["SendIfExist"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SubmitEmailVerificationRequest() = default;
};
class SubmitEmailVerificationResponseBodyExistList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  SubmitEmailVerificationResponseBodyExistList() {}

  explicit SubmitEmailVerificationResponseBodyExistList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SubmitEmailVerificationResponseBodyExistList() = default;
};
class SubmitEmailVerificationResponseBodyFailList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  SubmitEmailVerificationResponseBodyFailList() {}

  explicit SubmitEmailVerificationResponseBodyFailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SubmitEmailVerificationResponseBodyFailList() = default;
};
class SubmitEmailVerificationResponseBodySuccessList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> email{};
  shared_ptr<string> message{};

  SubmitEmailVerificationResponseBodySuccessList() {}

  explicit SubmitEmailVerificationResponseBodySuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SubmitEmailVerificationResponseBodySuccessList() = default;
};
class SubmitEmailVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SubmitEmailVerificationResponseBodyExistList>> existList{};
  shared_ptr<vector<SubmitEmailVerificationResponseBodyFailList>> failList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<SubmitEmailVerificationResponseBodySuccessList>> successList{};

  SubmitEmailVerificationResponseBody() {}

  explicit SubmitEmailVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existList) {
      vector<boost::any> temp1;
      for(auto item1:*existList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExistList"] = boost::any(temp1);
    }
    if (failList) {
      vector<boost::any> temp1;
      for(auto item1:*failList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successList) {
      vector<boost::any> temp1;
      for(auto item1:*successList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuccessList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExistList") != m.end() && !m["ExistList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExistList"].type()) {
        vector<SubmitEmailVerificationResponseBodyExistList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExistList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEmailVerificationResponseBodyExistList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        existList = make_shared<vector<SubmitEmailVerificationResponseBodyExistList>>(expect1);
      }
    }
    if (m.find("FailList") != m.end() && !m["FailList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailList"].type()) {
        vector<SubmitEmailVerificationResponseBodyFailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEmailVerificationResponseBodyFailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failList = make_shared<vector<SubmitEmailVerificationResponseBodyFailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(vector<boost::any>) == m["SuccessList"].type()) {
        vector<SubmitEmailVerificationResponseBodySuccessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuccessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEmailVerificationResponseBodySuccessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successList = make_shared<vector<SubmitEmailVerificationResponseBodySuccessList>>(expect1);
      }
    }
  }


  virtual ~SubmitEmailVerificationResponseBody() = default;
};
class SubmitEmailVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitEmailVerificationResponseBody> body{};

  SubmitEmailVerificationResponse() {}

  explicit SubmitEmailVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitEmailVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitEmailVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitEmailVerificationResponse() = default;
};
class SubmitOperationAuditInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditInfo{};
  shared_ptr<long> auditType{};
  shared_ptr<string> domainName{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  SubmitOperationAuditInfoRequest() {}

  explicit SubmitOperationAuditInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditInfo) {
      res["AuditInfo"] = boost::any(*auditInfo);
    }
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditInfo") != m.end() && !m["AuditInfo"].empty()) {
      auditInfo = make_shared<string>(boost::any_cast<string>(m["AuditInfo"]));
    }
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~SubmitOperationAuditInfoRequest() = default;
};
class SubmitOperationAuditInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  SubmitOperationAuditInfoResponseBody() {}

  explicit SubmitOperationAuditInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitOperationAuditInfoResponseBody() = default;
};
class SubmitOperationAuditInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitOperationAuditInfoResponseBody> body{};

  SubmitOperationAuditInfoResponse() {}

  explicit SubmitOperationAuditInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitOperationAuditInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitOperationAuditInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitOperationAuditInfoResponse() = default;
};
class SubmitOperationCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditRecordId{};
  shared_ptr<long> auditType{};
  shared_ptr<string> credentials{};
  shared_ptr<string> lang{};
  shared_ptr<long> regType{};

  SubmitOperationCredentialsRequest() {}

  explicit SubmitOperationCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRecordId) {
      res["AuditRecordId"] = boost::any(*auditRecordId);
    }
    if (auditType) {
      res["AuditType"] = boost::any(*auditType);
    }
    if (credentials) {
      res["Credentials"] = boost::any(*credentials);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regType) {
      res["RegType"] = boost::any(*regType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRecordId") != m.end() && !m["AuditRecordId"].empty()) {
      auditRecordId = make_shared<long>(boost::any_cast<long>(m["AuditRecordId"]));
    }
    if (m.find("AuditType") != m.end() && !m["AuditType"].empty()) {
      auditType = make_shared<long>(boost::any_cast<long>(m["AuditType"]));
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      credentials = make_shared<string>(boost::any_cast<string>(m["Credentials"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegType") != m.end() && !m["RegType"].empty()) {
      regType = make_shared<long>(boost::any_cast<long>(m["RegType"]));
    }
  }


  virtual ~SubmitOperationCredentialsRequest() = default;
};
class SubmitOperationCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SubmitOperationCredentialsResponseBody() {}

  explicit SubmitOperationCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitOperationCredentialsResponseBody() = default;
};
class SubmitOperationCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitOperationCredentialsResponseBody> body{};

  SubmitOperationCredentialsResponse() {}

  explicit SubmitOperationCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitOperationCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitOperationCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitOperationCredentialsResponse() = default;
};
class TransferInCheckMailTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> token{};
  shared_ptr<string> userClientIp{};

  TransferInCheckMailTokenRequest() {}

  explicit TransferInCheckMailTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~TransferInCheckMailTokenRequest() = default;
};
class TransferInCheckMailTokenResponseBodyFailList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> failDomain{};

  TransferInCheckMailTokenResponseBodyFailList() {}

  explicit TransferInCheckMailTokenResponseBodyFailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failDomain) {
      res["FailDomain"] = boost::any(*failDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailDomain") != m.end() && !m["FailDomain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FailDomain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FailDomain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      failDomain = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TransferInCheckMailTokenResponseBodyFailList() = default;
};
class TransferInCheckMailTokenResponseBodySuccessList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> successDomain{};

  TransferInCheckMailTokenResponseBodySuccessList() {}

  explicit TransferInCheckMailTokenResponseBodySuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (successDomain) {
      res["SuccessDomain"] = boost::any(*successDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuccessDomain") != m.end() && !m["SuccessDomain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuccessDomain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuccessDomain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      successDomain = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TransferInCheckMailTokenResponseBodySuccessList() = default;
};
class TransferInCheckMailTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<TransferInCheckMailTokenResponseBodyFailList> failList{};
  shared_ptr<string> requestId{};
  shared_ptr<TransferInCheckMailTokenResponseBodySuccessList> successList{};

  TransferInCheckMailTokenResponseBody() {}

  explicit TransferInCheckMailTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failList) {
      res["FailList"] = failList ? boost::any(failList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successList) {
      res["SuccessList"] = successList ? boost::any(successList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailList") != m.end() && !m["FailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailList"].type()) {
        TransferInCheckMailTokenResponseBodyFailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailList"]));
        failList = make_shared<TransferInCheckMailTokenResponseBodyFailList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SuccessList"].type()) {
        TransferInCheckMailTokenResponseBodySuccessList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SuccessList"]));
        successList = make_shared<TransferInCheckMailTokenResponseBodySuccessList>(model1);
      }
    }
  }


  virtual ~TransferInCheckMailTokenResponseBody() = default;
};
class TransferInCheckMailTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferInCheckMailTokenResponseBody> body{};

  TransferInCheckMailTokenResponse() {}

  explicit TransferInCheckMailTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferInCheckMailTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferInCheckMailTokenResponseBody>(model1);
      }
    }
  }


  virtual ~TransferInCheckMailTokenResponse() = default;
};
class TransferInReenterTransferAuthorizationCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> transferAuthorizationCode{};
  shared_ptr<string> userClientIp{};

  TransferInReenterTransferAuthorizationCodeRequest() {}

  explicit TransferInReenterTransferAuthorizationCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (transferAuthorizationCode) {
      res["TransferAuthorizationCode"] = boost::any(*transferAuthorizationCode);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TransferAuthorizationCode") != m.end() && !m["TransferAuthorizationCode"].empty()) {
      transferAuthorizationCode = make_shared<string>(boost::any_cast<string>(m["TransferAuthorizationCode"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~TransferInReenterTransferAuthorizationCodeRequest() = default;
};
class TransferInReenterTransferAuthorizationCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TransferInReenterTransferAuthorizationCodeResponseBody() {}

  explicit TransferInReenterTransferAuthorizationCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TransferInReenterTransferAuthorizationCodeResponseBody() = default;
};
class TransferInReenterTransferAuthorizationCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferInReenterTransferAuthorizationCodeResponseBody> body{};

  TransferInReenterTransferAuthorizationCodeResponse() {}

  explicit TransferInReenterTransferAuthorizationCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferInReenterTransferAuthorizationCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferInReenterTransferAuthorizationCodeResponseBody>(model1);
      }
    }
  }


  virtual ~TransferInReenterTransferAuthorizationCodeResponse() = default;
};
class TransferInRefetchWhoisEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  TransferInRefetchWhoisEmailRequest() {}

  explicit TransferInRefetchWhoisEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~TransferInRefetchWhoisEmailRequest() = default;
};
class TransferInRefetchWhoisEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TransferInRefetchWhoisEmailResponseBody() {}

  explicit TransferInRefetchWhoisEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TransferInRefetchWhoisEmailResponseBody() = default;
};
class TransferInRefetchWhoisEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferInRefetchWhoisEmailResponseBody> body{};

  TransferInRefetchWhoisEmailResponse() {}

  explicit TransferInRefetchWhoisEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferInRefetchWhoisEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferInRefetchWhoisEmailResponseBody>(model1);
      }
    }
  }


  virtual ~TransferInRefetchWhoisEmailResponse() = default;
};
class TransferInResendMailTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  TransferInResendMailTokenRequest() {}

  explicit TransferInResendMailTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~TransferInResendMailTokenRequest() = default;
};
class TransferInResendMailTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TransferInResendMailTokenResponseBody() {}

  explicit TransferInResendMailTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TransferInResendMailTokenResponseBody() = default;
};
class TransferInResendMailTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferInResendMailTokenResponseBody> body{};

  TransferInResendMailTokenResponse() {}

  explicit TransferInResendMailTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferInResendMailTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferInResendMailTokenResponseBody>(model1);
      }
    }
  }


  virtual ~TransferInResendMailTokenResponse() = default;
};
class UpdateDomainToDomainGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataSource{};
  shared_ptr<long> domainGroupId{};
  shared_ptr<vector<string>> domainName{};
  shared_ptr<string> fileToUpload{};
  shared_ptr<string> lang{};
  shared_ptr<bool> replace{};
  shared_ptr<string> userClientIp{};

  UpdateDomainToDomainGroupRequest() {}

  explicit UpdateDomainToDomainGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (domainGroupId) {
      res["DomainGroupId"] = boost::any(*domainGroupId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (fileToUpload) {
      res["FileToUpload"] = boost::any(*fileToUpload);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (replace) {
      res["Replace"] = boost::any(*replace);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSource = make_shared<long>(boost::any_cast<long>(m["DataSource"]));
    }
    if (m.find("DomainGroupId") != m.end() && !m["DomainGroupId"].empty()) {
      domainGroupId = make_shared<long>(boost::any_cast<long>(m["DomainGroupId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FileToUpload") != m.end() && !m["FileToUpload"].empty()) {
      fileToUpload = make_shared<string>(boost::any_cast<string>(m["FileToUpload"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Replace") != m.end() && !m["Replace"].empty()) {
      replace = make_shared<bool>(boost::any_cast<bool>(m["Replace"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~UpdateDomainToDomainGroupRequest() = default;
};
class UpdateDomainToDomainGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDomainToDomainGroupResponseBody() {}

  explicit UpdateDomainToDomainGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDomainToDomainGroupResponseBody() = default;
};
class UpdateDomainToDomainGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDomainToDomainGroupResponseBody> body{};

  UpdateDomainToDomainGroupResponse() {}

  explicit UpdateDomainToDomainGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDomainToDomainGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDomainToDomainGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDomainToDomainGroupResponse() = default;
};
class VerifyContactFieldRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> domainName{};
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> postalCode{};
  shared_ptr<string> province{};
  shared_ptr<string> registrantName{};
  shared_ptr<string> registrantOrganization{};
  shared_ptr<string> registrantType{};
  shared_ptr<string> telArea{};
  shared_ptr<string> telExt{};
  shared_ptr<string> telephone{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zhAddress{};
  shared_ptr<string> zhCity{};
  shared_ptr<string> zhProvince{};
  shared_ptr<string> zhRegistrantName{};
  shared_ptr<string> zhRegistrantOrganization{};

  VerifyContactFieldRequest() {}

  explicit VerifyContactFieldRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (registrantName) {
      res["RegistrantName"] = boost::any(*registrantName);
    }
    if (registrantOrganization) {
      res["RegistrantOrganization"] = boost::any(*registrantOrganization);
    }
    if (registrantType) {
      res["RegistrantType"] = boost::any(*registrantType);
    }
    if (telArea) {
      res["TelArea"] = boost::any(*telArea);
    }
    if (telExt) {
      res["TelExt"] = boost::any(*telExt);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zhAddress) {
      res["ZhAddress"] = boost::any(*zhAddress);
    }
    if (zhCity) {
      res["ZhCity"] = boost::any(*zhCity);
    }
    if (zhProvince) {
      res["ZhProvince"] = boost::any(*zhProvince);
    }
    if (zhRegistrantName) {
      res["ZhRegistrantName"] = boost::any(*zhRegistrantName);
    }
    if (zhRegistrantOrganization) {
      res["ZhRegistrantOrganization"] = boost::any(*zhRegistrantOrganization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RegistrantName") != m.end() && !m["RegistrantName"].empty()) {
      registrantName = make_shared<string>(boost::any_cast<string>(m["RegistrantName"]));
    }
    if (m.find("RegistrantOrganization") != m.end() && !m["RegistrantOrganization"].empty()) {
      registrantOrganization = make_shared<string>(boost::any_cast<string>(m["RegistrantOrganization"]));
    }
    if (m.find("RegistrantType") != m.end() && !m["RegistrantType"].empty()) {
      registrantType = make_shared<string>(boost::any_cast<string>(m["RegistrantType"]));
    }
    if (m.find("TelArea") != m.end() && !m["TelArea"].empty()) {
      telArea = make_shared<string>(boost::any_cast<string>(m["TelArea"]));
    }
    if (m.find("TelExt") != m.end() && !m["TelExt"].empty()) {
      telExt = make_shared<string>(boost::any_cast<string>(m["TelExt"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZhAddress") != m.end() && !m["ZhAddress"].empty()) {
      zhAddress = make_shared<string>(boost::any_cast<string>(m["ZhAddress"]));
    }
    if (m.find("ZhCity") != m.end() && !m["ZhCity"].empty()) {
      zhCity = make_shared<string>(boost::any_cast<string>(m["ZhCity"]));
    }
    if (m.find("ZhProvince") != m.end() && !m["ZhProvince"].empty()) {
      zhProvince = make_shared<string>(boost::any_cast<string>(m["ZhProvince"]));
    }
    if (m.find("ZhRegistrantName") != m.end() && !m["ZhRegistrantName"].empty()) {
      zhRegistrantName = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantName"]));
    }
    if (m.find("ZhRegistrantOrganization") != m.end() && !m["ZhRegistrantOrganization"].empty()) {
      zhRegistrantOrganization = make_shared<string>(boost::any_cast<string>(m["ZhRegistrantOrganization"]));
    }
  }


  virtual ~VerifyContactFieldRequest() = default;
};
class VerifyContactFieldResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyContactFieldResponseBody() {}

  explicit VerifyContactFieldResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyContactFieldResponseBody() = default;
};
class VerifyContactFieldResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyContactFieldResponseBody> body{};

  VerifyContactFieldResponse() {}

  explicit VerifyContactFieldResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VerifyContactFieldResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyContactFieldResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyContactFieldResponse() = default;
};
class VerifyEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> token{};
  shared_ptr<string> userClientIp{};

  VerifyEmailRequest() {}

  explicit VerifyEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~VerifyEmailRequest() = default;
};
class VerifyEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyEmailResponseBody() {}

  explicit VerifyEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyEmailResponseBody() = default;
};
class VerifyEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyEmailResponseBody> body{};

  VerifyEmailResponse() {}

  explicit VerifyEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VerifyEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyEmailResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyEmailResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AcknowledgeTaskResultResponse acknowledgeTaskResultWithOptions(shared_ptr<AcknowledgeTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcknowledgeTaskResultResponse acknowledgeTaskResult(shared_ptr<AcknowledgeTaskResultRequest> request);
  BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchFuzzyMatchDomainSensitiveWordResponse batchFuzzyMatchDomainSensitiveWord(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request);
  CancelDomainVerificationResponse cancelDomainVerificationWithOptions(shared_ptr<CancelDomainVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDomainVerificationResponse cancelDomainVerification(shared_ptr<CancelDomainVerificationRequest> request);
  CancelOperationAuditResponse cancelOperationAuditWithOptions(shared_ptr<CancelOperationAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOperationAuditResponse cancelOperationAudit(shared_ptr<CancelOperationAuditRequest> request);
  CancelQualificationVerificationResponse cancelQualificationVerificationWithOptions(shared_ptr<CancelQualificationVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelQualificationVerificationResponse cancelQualificationVerification(shared_ptr<CancelQualificationVerificationRequest> request);
  CancelTaskResponse cancelTaskWithOptions(shared_ptr<CancelTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelTaskResponse cancelTask(shared_ptr<CancelTaskRequest> request);
  CheckDomainResponse checkDomainWithOptions(shared_ptr<CheckDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainResponse checkDomain(shared_ptr<CheckDomainRequest> request);
  CheckDomainSunriseClaimResponse checkDomainSunriseClaimWithOptions(shared_ptr<CheckDomainSunriseClaimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainSunriseClaimResponse checkDomainSunriseClaim(shared_ptr<CheckDomainSunriseClaimRequest> request);
  CheckMaxYearOfServerLockResponse checkMaxYearOfServerLockWithOptions(shared_ptr<CheckMaxYearOfServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMaxYearOfServerLockResponse checkMaxYearOfServerLock(shared_ptr<CheckMaxYearOfServerLockRequest> request);
  CheckProcessingServerLockApplyResponse checkProcessingServerLockApplyWithOptions(shared_ptr<CheckProcessingServerLockApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckProcessingServerLockApplyResponse checkProcessingServerLockApply(shared_ptr<CheckProcessingServerLockApplyRequest> request);
  CheckTransferInFeasibilityResponse checkTransferInFeasibilityWithOptions(shared_ptr<CheckTransferInFeasibilityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckTransferInFeasibilityResponse checkTransferInFeasibility(shared_ptr<CheckTransferInFeasibilityRequest> request);
  ConfirmTransferInEmailResponse confirmTransferInEmailWithOptions(shared_ptr<ConfirmTransferInEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmTransferInEmailResponse confirmTransferInEmail(shared_ptr<ConfirmTransferInEmailRequest> request);
  DeleteContactTemplatesResponse deleteContactTemplatesWithOptions(shared_ptr<DeleteContactTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteContactTemplatesResponse deleteContactTemplates(shared_ptr<DeleteContactTemplatesRequest> request);
  DeleteDomainGroupResponse deleteDomainGroupWithOptions(shared_ptr<DeleteDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainGroupResponse deleteDomainGroup(shared_ptr<DeleteDomainGroupRequest> request);
  DeleteEmailVerificationResponse deleteEmailVerificationWithOptions(shared_ptr<DeleteEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEmailVerificationResponse deleteEmailVerification(shared_ptr<DeleteEmailVerificationRequest> request);
  DeleteRegistrantProfileResponse deleteRegistrantProfileWithOptions(shared_ptr<DeleteRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRegistrantProfileResponse deleteRegistrantProfile(shared_ptr<DeleteRegistrantProfileRequest> request);
  EmailVerifiedResponse emailVerifiedWithOptions(shared_ptr<EmailVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EmailVerifiedResponse emailVerified(shared_ptr<EmailVerifiedRequest> request);
  FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FuzzyMatchDomainSensitiveWordResponse fuzzyMatchDomainSensitiveWord(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request);
  GetOperationOssUploadPolicyResponse getOperationOssUploadPolicyWithOptions(shared_ptr<GetOperationOssUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOperationOssUploadPolicyResponse getOperationOssUploadPolicy(shared_ptr<GetOperationOssUploadPolicyRequest> request);
  GetQualificationUploadPolicyResponse getQualificationUploadPolicyWithOptions(shared_ptr<GetQualificationUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQualificationUploadPolicyResponse getQualificationUploadPolicy(shared_ptr<GetQualificationUploadPolicyRequest> request);
  ListEmailVerificationResponse listEmailVerificationWithOptions(shared_ptr<ListEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEmailVerificationResponse listEmailVerification(shared_ptr<ListEmailVerificationRequest> request);
  ListServerLockResponse listServerLockWithOptions(shared_ptr<ListServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerLockResponse listServerLock(shared_ptr<ListServerLockRequest> request);
  LookupTmchNoticeResponse lookupTmchNoticeWithOptions(shared_ptr<LookupTmchNoticeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LookupTmchNoticeResponse lookupTmchNotice(shared_ptr<LookupTmchNoticeRequest> request);
  PollTaskResultResponse pollTaskResultWithOptions(shared_ptr<PollTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PollTaskResultResponse pollTaskResult(shared_ptr<PollTaskResultRequest> request);
  QueryAdvancedDomainListResponse queryAdvancedDomainListWithOptions(shared_ptr<QueryAdvancedDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAdvancedDomainListResponse queryAdvancedDomainList(shared_ptr<QueryAdvancedDomainListRequest> request);
  QueryArtExtensionResponse queryArtExtensionWithOptions(shared_ptr<QueryArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryArtExtensionResponse queryArtExtension(shared_ptr<QueryArtExtensionRequest> request);
  QueryChangeLogListResponse queryChangeLogListWithOptions(shared_ptr<QueryChangeLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChangeLogListResponse queryChangeLogList(shared_ptr<QueryChangeLogListRequest> request);
  QueryContactInfoResponse queryContactInfoWithOptions(shared_ptr<QueryContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryContactInfoResponse queryContactInfo(shared_ptr<QueryContactInfoRequest> request);
  QueryDSRecordResponse queryDSRecordWithOptions(shared_ptr<QueryDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDSRecordResponse queryDSRecord(shared_ptr<QueryDSRecordRequest> request);
  QueryDnsHostResponse queryDnsHostWithOptions(shared_ptr<QueryDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDnsHostResponse queryDnsHost(shared_ptr<QueryDnsHostRequest> request);
  QueryDomainAdminDivisionResponse queryDomainAdminDivisionWithOptions(shared_ptr<QueryDomainAdminDivisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainAdminDivisionResponse queryDomainAdminDivision(shared_ptr<QueryDomainAdminDivisionRequest> request);
  QueryDomainByDomainNameResponse queryDomainByDomainNameWithOptions(shared_ptr<QueryDomainByDomainNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainByDomainNameResponse queryDomainByDomainName(shared_ptr<QueryDomainByDomainNameRequest> request);
  QueryDomainByInstanceIdResponse queryDomainByInstanceIdWithOptions(shared_ptr<QueryDomainByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainByInstanceIdResponse queryDomainByInstanceId(shared_ptr<QueryDomainByInstanceIdRequest> request);
  QueryDomainGroupListResponse queryDomainGroupListWithOptions(shared_ptr<QueryDomainGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainGroupListResponse queryDomainGroupList(shared_ptr<QueryDomainGroupListRequest> request);
  QueryDomainListResponse queryDomainListWithOptions(shared_ptr<QueryDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainListResponse queryDomainList(shared_ptr<QueryDomainListRequest> request);
  QueryDomainRealNameVerificationInfoResponse queryDomainRealNameVerificationInfoWithOptions(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainRealNameVerificationInfoResponse queryDomainRealNameVerificationInfo(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request);
  QueryDomainSuffixResponse queryDomainSuffixWithOptions(shared_ptr<QueryDomainSuffixRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainSuffixResponse queryDomainSuffix(shared_ptr<QueryDomainSuffixRequest> request);
  QueryEmailVerificationResponse queryEmailVerificationWithOptions(shared_ptr<QueryEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEmailVerificationResponse queryEmailVerification(shared_ptr<QueryEmailVerificationRequest> request);
  QueryEnsAssociationResponse queryEnsAssociationWithOptions(shared_ptr<QueryEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEnsAssociationResponse queryEnsAssociation(shared_ptr<QueryEnsAssociationRequest> request);
  QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFailReasonForDomainRealNameVerificationResponse queryFailReasonForDomainRealNameVerification(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request);
  QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFailReasonForRegistrantProfileRealNameVerificationResponse queryFailReasonForRegistrantProfileRealNameVerification(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request);
  QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualificationWithOptions(shared_ptr<QueryFailingReasonListForQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFailingReasonListForQualificationResponse queryFailingReasonListForQualification(shared_ptr<QueryFailingReasonListForQualificationRequest> request);
  QueryLocalEnsAssociationResponse queryLocalEnsAssociationWithOptions(shared_ptr<QueryLocalEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLocalEnsAssociationResponse queryLocalEnsAssociation(shared_ptr<QueryLocalEnsAssociationRequest> request);
  QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetailWithOptions(shared_ptr<QueryOperationAuditInfoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOperationAuditInfoDetailResponse queryOperationAuditInfoDetail(shared_ptr<QueryOperationAuditInfoDetailRequest> request);
  QueryOperationAuditInfoListResponse queryOperationAuditInfoListWithOptions(shared_ptr<QueryOperationAuditInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOperationAuditInfoListResponse queryOperationAuditInfoList(shared_ptr<QueryOperationAuditInfoListRequest> request);
  QueryQualificationDetailResponse queryQualificationDetailWithOptions(shared_ptr<QueryQualificationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryQualificationDetailResponse queryQualificationDetail(shared_ptr<QueryQualificationDetailRequest> request);
  QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfoWithOptions(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRegistrantProfileRealNameVerificationInfoResponse queryRegistrantProfileRealNameVerificationInfo(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request);
  QueryRegistrantProfilesResponse queryRegistrantProfilesWithOptions(shared_ptr<QueryRegistrantProfilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRegistrantProfilesResponse queryRegistrantProfiles(shared_ptr<QueryRegistrantProfilesRequest> request);
  QueryServerLockResponse queryServerLockWithOptions(shared_ptr<QueryServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryServerLockResponse queryServerLock(shared_ptr<QueryServerLockRequest> request);
  QueryTaskDetailHistoryResponse queryTaskDetailHistoryWithOptions(shared_ptr<QueryTaskDetailHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskDetailHistoryResponse queryTaskDetailHistory(shared_ptr<QueryTaskDetailHistoryRequest> request);
  QueryTaskDetailListResponse queryTaskDetailListWithOptions(shared_ptr<QueryTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskDetailListResponse queryTaskDetailList(shared_ptr<QueryTaskDetailListRequest> request);
  QueryTaskInfoHistoryResponse queryTaskInfoHistoryWithOptions(shared_ptr<QueryTaskInfoHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskInfoHistoryResponse queryTaskInfoHistory(shared_ptr<QueryTaskInfoHistoryRequest> request);
  QueryTaskListResponse queryTaskListWithOptions(shared_ptr<QueryTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskListResponse queryTaskList(shared_ptr<QueryTaskListRequest> request);
  QueryTransferInByInstanceIdResponse queryTransferInByInstanceIdWithOptions(shared_ptr<QueryTransferInByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferInByInstanceIdResponse queryTransferInByInstanceId(shared_ptr<QueryTransferInByInstanceIdRequest> request);
  QueryTransferInListResponse queryTransferInListWithOptions(shared_ptr<QueryTransferInListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferInListResponse queryTransferInList(shared_ptr<QueryTransferInListRequest> request);
  QueryTransferOutInfoResponse queryTransferOutInfoWithOptions(shared_ptr<QueryTransferOutInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferOutInfoResponse queryTransferOutInfo(shared_ptr<QueryTransferOutInfoRequest> request);
  RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerificationWithOptions(shared_ptr<RegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegistrantProfileRealNameVerificationResponse registrantProfileRealNameVerification(shared_ptr<RegistrantProfileRealNameVerificationRequest> request);
  ResendEmailVerificationResponse resendEmailVerificationWithOptions(shared_ptr<ResendEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendEmailVerificationResponse resendEmailVerification(shared_ptr<ResendEmailVerificationRequest> request);
  ResetQualificationVerificationResponse resetQualificationVerificationWithOptions(shared_ptr<ResetQualificationVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetQualificationVerificationResponse resetQualificationVerification(shared_ptr<ResetQualificationVerificationRequest> request);
  SaveBatchDomainRemarkResponse saveBatchDomainRemarkWithOptions(shared_ptr<SaveBatchDomainRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchDomainRemarkResponse saveBatchDomainRemark(shared_ptr<SaveBatchDomainRemarkRequest> request);
  SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForCreatingOrderActivateResponse saveBatchTaskForCreatingOrderActivate(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request);
  SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForCreatingOrderRedeemResponse saveBatchTaskForCreatingOrderRedeem(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request);
  SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForCreatingOrderRenewResponse saveBatchTaskForCreatingOrderRenew(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request);
  SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForCreatingOrderTransferResponse saveBatchTaskForCreatingOrderTransfer(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request);
  SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForDomainNameProxyServiceResponse saveBatchTaskForDomainNameProxyService(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request);
  SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDnsWithOptions(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForModifyingDomainDnsResponse saveBatchTaskForModifyingDomainDns(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request);
  SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomainWithOptions(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForReserveDropListDomainResponse saveBatchTaskForReserveDropListDomain(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request);
  SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForTransferProhibitionLockResponse saveBatchTaskForTransferProhibitionLock(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request);
  SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForUpdateProhibitionLockResponse saveBatchTaskForUpdateProhibitionLock(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request);
  SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForUpdatingContactInfoByNewContactResponse saveBatchTaskForUpdatingContactInfoByNewContact(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request);
  SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(shared_ptr<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest> request);
  SaveDomainGroupResponse saveDomainGroupWithOptions(shared_ptr<SaveDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveDomainGroupResponse saveDomainGroup(shared_ptr<SaveDomainGroupRequest> request);
  SaveRegistrantProfileResponse saveRegistrantProfileWithOptions(shared_ptr<SaveRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveRegistrantProfileResponse saveRegistrantProfile(shared_ptr<SaveRegistrantProfileRequest> request);
  SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerificationWithOptions(shared_ptr<SaveRegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveRegistrantProfileRealNameVerificationResponse saveRegistrantProfileRealNameVerification(shared_ptr<SaveRegistrantProfileRealNameVerificationRequest> request);
  SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecordWithOptions(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForAddingDSRecordResponse saveSingleTaskForAddingDSRecord(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request);
  SaveSingleTaskForApprovingTransferOutResponse saveSingleTaskForApprovingTransferOutWithOptions(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForApprovingTransferOutResponse saveSingleTaskForApprovingTransferOut(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request);
  SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEnsWithOptions(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForAssociatingEnsResponse saveSingleTaskForAssociatingEns(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request);
  SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferInWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCancelingTransferInResponse saveSingleTaskForCancelingTransferIn(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request);
  SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOutWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCancelingTransferOutResponse saveSingleTaskForCancelingTransferOut(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request);
  SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHostWithOptions(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCreatingDnsHostResponse saveSingleTaskForCreatingDnsHost(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request);
  SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCreatingOrderActivateResponse saveSingleTaskForCreatingOrderActivate(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request);
  SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCreatingOrderRedeemResponse saveSingleTaskForCreatingOrderRedeem(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request);
  SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCreatingOrderRenewResponse saveSingleTaskForCreatingOrderRenew(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request);
  SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForCreatingOrderTransferResponse saveSingleTaskForCreatingOrderTransfer(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request);
  SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecordWithOptions(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForDeletingDSRecordResponse saveSingleTaskForDeletingDSRecord(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request);
  SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHostWithOptions(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForDeletingDnsHostResponse saveSingleTaskForDeletingDnsHost(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request);
  SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEnsWithOptions(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForDisassociatingEnsResponse saveSingleTaskForDisassociatingEns(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request);
  SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForDomainNameProxyServiceResponse saveSingleTaskForDomainNameProxyService(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request);
  SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecordWithOptions(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForModifyingDSRecordResponse saveSingleTaskForModifyingDSRecord(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request);
  SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHostWithOptions(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForModifyingDnsHostResponse saveSingleTaskForModifyingDnsHost(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request);
  SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForQueryingTransferAuthorizationCodeResponse saveSingleTaskForQueryingTransferAuthorizationCode(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request);
  SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtensionWithOptions(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForSaveArtExtensionResponse saveSingleTaskForSaveArtExtension(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request);
  SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecordWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForSynchronizingDSRecordResponse saveSingleTaskForSynchronizingDSRecord(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request);
  SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHostWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForSynchronizingDnsHostResponse saveSingleTaskForSynchronizingDnsHost(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request);
  SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForTransferProhibitionLockResponse saveSingleTaskForTransferProhibitionLock(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request);
  SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForUpdateProhibitionLockResponse saveSingleTaskForUpdateProhibitionLock(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request);
  SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfoWithOptions(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSingleTaskForUpdatingContactInfoResponse saveSingleTaskForUpdatingContactInfo(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request);
  SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDeleteWithOptions(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTaskForSubmittingDomainDeleteResponse saveTaskForSubmittingDomainDelete(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request);
  SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request);
  SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request);
  SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse saveTaskForUpdatingRegistrantInfoByIdentityCredential(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request);
  SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request);
  ScrollDomainListResponse scrollDomainListWithOptions(shared_ptr<ScrollDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScrollDomainListResponse scrollDomainList(shared_ptr<ScrollDomainListRequest> request);
  SetDefaultRegistrantProfileResponse setDefaultRegistrantProfileWithOptions(shared_ptr<SetDefaultRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultRegistrantProfileResponse setDefaultRegistrantProfile(shared_ptr<SetDefaultRegistrantProfileRequest> request);
  SubmitEmailVerificationResponse submitEmailVerificationWithOptions(shared_ptr<SubmitEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitEmailVerificationResponse submitEmailVerification(shared_ptr<SubmitEmailVerificationRequest> request);
  SubmitOperationAuditInfoResponse submitOperationAuditInfoWithOptions(shared_ptr<SubmitOperationAuditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitOperationAuditInfoResponse submitOperationAuditInfo(shared_ptr<SubmitOperationAuditInfoRequest> request);
  SubmitOperationCredentialsResponse submitOperationCredentialsWithOptions(shared_ptr<SubmitOperationCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitOperationCredentialsResponse submitOperationCredentials(shared_ptr<SubmitOperationCredentialsRequest> request);
  TransferInCheckMailTokenResponse transferInCheckMailTokenWithOptions(shared_ptr<TransferInCheckMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferInCheckMailTokenResponse transferInCheckMailToken(shared_ptr<TransferInCheckMailTokenRequest> request);
  TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCodeWithOptions(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferInReenterTransferAuthorizationCodeResponse transferInReenterTransferAuthorizationCode(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request);
  TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmailWithOptions(shared_ptr<TransferInRefetchWhoisEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferInRefetchWhoisEmailResponse transferInRefetchWhoisEmail(shared_ptr<TransferInRefetchWhoisEmailRequest> request);
  TransferInResendMailTokenResponse transferInResendMailTokenWithOptions(shared_ptr<TransferInResendMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferInResendMailTokenResponse transferInResendMailToken(shared_ptr<TransferInResendMailTokenRequest> request);
  UpdateDomainToDomainGroupResponse updateDomainToDomainGroupWithOptions(shared_ptr<UpdateDomainToDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDomainToDomainGroupResponse updateDomainToDomainGroup(shared_ptr<UpdateDomainToDomainGroupRequest> request);
  VerifyContactFieldResponse verifyContactFieldWithOptions(shared_ptr<VerifyContactFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyContactFieldResponse verifyContactField(shared_ptr<VerifyContactFieldRequest> request);
  VerifyEmailResponse verifyEmailWithOptions(shared_ptr<VerifyEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyEmailResponse verifyEmail(shared_ptr<VerifyEmailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Domain20180129

#endif
